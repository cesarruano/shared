`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: KirLab
// Engineer: Cesar Ruano
// 
// Create Date:    1/1/2023
// Design Name: 
// Module Name:    bootloader 
// Project Name: 
// Target Devices: XC2C64A
// Tool versions: 
// Description: Load binary into Xilinx XCxy devices reading 1 byte from FT60X bus. Tested with XC7A.
//
// Dependencies: 
//
// Revision: 
// Revision 1.00 
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module bootloader(
	clk,
	fpga_done,
	fpga_bl_clk,
	fpga_bl_data,
	fpga_init_b,
	fpga_program_b,
	ftdi_clk,
	ftdi_data,
	dbg,
	ftdi_rxf_n,
	ftdi_rd_n,
	ftdi_gpio_0,
	ftdi_gpio_1);

/*Tested for bus freq of 100Mhz*/
parameter BUS_CLK_PRESCALER =  5;  
parameter BUS_CLK_HALF_PRESCALER =  BUS_CLK_PRESCALER/2;

/*Tested for general clk freq of 100Mhz*/
parameter GENERAL_CLK_PRESCALER_BITS = 8;
parameter GENERAL_CLK_PRESCALER = 256;/*Prescaled freq = 100Mhz/GENERAL_CLK_PRESCALER*/
parameter PROGRAM_B_PULSE_WIDTH = 1024*8;/*General prescaled clk counts*/

input clk;
input fpga_done;
input fpga_init_b;
input ftdi_clk;
input ftdi_rxf_n;
input ftdi_gpio_0;
input [11:0] ftdi_data; 

output dbg;
output ftdi_gpio_1;
output ftdi_rd_n;
output fpga_program_b;
output fpga_bl_clk;
output fpga_bl_data;

/*Output buffers*/
reg ftdi_gpio_1_buffer = 'bz;
reg ftdi_rd_n_buffer = 1;
reg fpga_program_b_buffer;
reg fpga_bl_clk_buffer = 0;
reg fpga_bl_data_buffer = 0;
/*Internal signals*/
reg [15:0] program_b_cnt = 0;
reg [6:0] cnt_debounce = 0;
reg [3:0] data_buffer_cnt=0;
reg [7:0] data_buffer=0;
reg [GENERAL_CLK_PRESCALER_BITS-1:0] clk_prescaler_cnt=0;
reg clk_prescaled=0;

assign dbg = fpga_done;
assign ftdi_gpio_1 = ftdi_gpio_1_buffer;
assign fpga_program_b = fpga_program_b_buffer;
assign ftdi_rd_n = ftdi_rd_n_buffer;
assign fpga_bl_clk = fpga_bl_clk_buffer;
assign fpga_bl_data = fpga_bl_data_buffer;

always @ (posedge clk)
	begin
		clk_prescaler_cnt = clk_prescaler_cnt + 1;
		clk_prescaled = clk_prescaler_cnt>(GENERAL_CLK_PRESCALER/2);
	end
	
always @ (posedge clk_prescaled)
	begin
		if (ftdi_gpio_0==1) begin
			/*Manage PROGRAM_B*/
			if (program_b_cnt >= PROGRAM_B_PULSE_WIDTH) begin
				program_b_cnt = PROGRAM_B_PULSE_WIDTH;
				ftdi_gpio_1_buffer = fpga_done;
				fpga_program_b_buffer = 1;
			end else begin
				program_b_cnt = program_b_cnt + 1;
				fpga_program_b_buffer = 0;
			end
		end else begin
			ftdi_gpio_1_buffer = 'bz;
			fpga_program_b_buffer = 1;
			program_b_cnt = 0;
		end
	end

always @ (posedge ftdi_clk)
	begin
		if (ftdi_gpio_0==1) begin
			if((ftdi_rxf_n == 0) && (ftdi_rd_n_buffer == 1) && (data_buffer_cnt==0))begin//Ack rxf
				ftdi_rd_n_buffer = 0;
			end else if((ftdi_rd_n_buffer == 0) && (data_buffer_cnt==0)) begin//Sample data
				data_buffer[7:0] = ftdi_data[7:0];
				data_buffer_cnt = 8;
				ftdi_rd_n_buffer = 1;
				fpga_bl_clk_buffer = 0;
				fpga_bl_data_buffer = 0;
				cnt_debounce = 0;
			end else if (data_buffer_cnt!=0) begin//Transfer bit by bit
				cnt_debounce = cnt_debounce + 1;
				if(cnt_debounce == 1)begin
					fpga_bl_data_buffer = data_buffer[data_buffer_cnt-1];
					fpga_bl_clk_buffer = 0;
				end else if(cnt_debounce == BUS_CLK_HALF_PRESCALER)begin
					fpga_bl_clk_buffer = 1;
				end else if(cnt_debounce >= BUS_CLK_PRESCALER-1)begin
					fpga_bl_clk_buffer = 0;
					data_buffer_cnt = data_buffer_cnt - 1;
					cnt_debounce = 0;
				end
			end
			
		end else begin
			data_buffer_cnt = 0;
			ftdi_rd_n_buffer = 1;
			fpga_bl_clk_buffer = 'bz;
			fpga_bl_data_buffer = 'bz;
			ftdi_rd_n_buffer = 'bz;
		end
	end

endmodule