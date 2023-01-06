`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:16:01 03/10/2018 
// Design Name: 
// Module Name:    bootloader 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module bootloader(
	clk  			 ,
	fpga_done  	 ,
	fpga_bl_clk   ,
	fpga_bl_data   ,
	fpga_init_b   ,
	fpga_program_b   ,
	ftdi_clk   ,
	ftdi_data   ,
	dbg,
	ftdi_rxf_n   ,
	ftdi_rd_n   ,
	ftdi_gpio_0   ,
	ftdi_gpio_1 ,
	debug,
	data_buffer_debug
    );

input clk  			 ,
	fpga_done  	 ,
	ftdi_clk   ,
	ftdi_rxf_n   ,
	ftdi_gpio_0   ,
	ftdi_gpio_1 ;
	
input [11:0] ftdi_data;

output dbg;
output ftdi_rd_n;
output [3:0]debug;
output [7:0]data_buffer_debug;
output fpga_bl_clk;
output fpga_bl_data;
output fpga_program_b;
input fpga_init_b;

parameter BUS_CLK = 100;
parameter WPS = 256; 
parameter BUS_CLK_PRESCALER =  WPS/8;
parameter BUS_CLK_HALF_PRESCALER =  BUS_CLK_PRESCALER/2;


reg dbg_buffer = 0;
reg ftdi_rd_n_buffer = 1;

reg fpga_bl_clk_buffer = 0;
reg fpga_bl_data_buffer = 0;

reg [10:0] cnt_words = 0;
reg [4:0] cnt_debounce = 0;
reg [2:0] cnt_bit = 7;

reg [3:0] data_buffer_cnt=0;
reg [7:0] data_buffer=0;

reg fpga_program_b_buffer;
reg fpga_init_b_buffer = 'bz;

assign dbg = fpga_program_b_buffer;
assign data_buffer_debug = data_buffer;

assign fpga_bl_clk = fpga_bl_clk_buffer;
assign fpga_bl_data = fpga_bl_data_buffer;

assign ftdi_rd_n = ftdi_rd_n_buffer;

assign fpga_program_b = fpga_program_b_buffer;

assign debug = data_buffer_cnt;

reg prev_gpio_0 = 0;

always @ (posedge clk)
		fpga_program_b_buffer = !(ftdi_gpio_0&&ftdi_gpio_1);

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
			fpga_bl_clk_buffer = 'bz;
			fpga_bl_data_buffer = 'bz;
			ftdi_rd_n_buffer = 'bz;
		end
	end

endmodule