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
	ftdi_gpio_1 
    );

input clk  			 ,
	fpga_done  	 ,
	ftdi_clk   ,
	ftdi_rxf_n   ,
	ftdi_gpio_0   ,
	ftdi_gpio_1 ;
	
input [15:0] ftdi_data;

output dbg;
output ftdi_rd_n;
output fpga_bl_clk;
output fpga_bl_data;
output fpga_program_b;
input fpga_init_b;

parameter BUS_CLK = 100;
parameter BUS_CLK_PRESCALER = 32;
parameter BUS_CLK_HALF_PRESCALER = 16;
parameter WPS = 1024; 

reg dbg_buffer = 0;
reg ftdi_rd_n_buffer_p = 1;
reg ftdi_rd_n_buffer_n = 1;

reg fpga_bl_clk_buffer = 0;
reg fpga_bl_data_buffer = 0;

reg [10:0] cnt_words = 0;
reg [4:0] cnt_debounce = 0;
reg [2:0] cnt_bit = 3;

reg fpga_program_b_buffer;
reg fpga_init_b_buffer = 'bz;

assign dbg = fpga_bl_data_buffer;

assign fpga_bl_clk = fpga_bl_clk_buffer;
assign fpga_bl_data = fpga_bl_data_buffer;

assign ftdi_rd_n = ftdi_rd_n_buffer_n;

assign fpga_program_b = ftdi_gpio_0;
//assign fpga_init_b = fpga_init_b_buffer;

always @ (negedge ftdi_clk)
	begin
		ftdi_rd_n_buffer_n = ftdi_rd_n_buffer_p;
end


always @ (posedge ftdi_gpio_0)
	begin
		fpga_program_b_buffer = 1;
		//fpga_bl_clk_buffer = 0;
end

always @ (negedge ftdi_gpio_0)
	begin
		fpga_program_b_buffer = 0;
		//fpga_bl_clk_buffer = 0;
end

always @ (posedge ftdi_clk)
	begin
		if(ftdi_rxf_n == 1)begin
			ftdi_rd_n_buffer_p = 1;
		end
		
		if(ftdi_rd_n_buffer_p == 0) begin
		
			if(cnt_debounce == 0)begin
				fpga_bl_clk_buffer = 0;
				fpga_bl_data_buffer = ftdi_data[cnt_bit];
				cnt_bit = cnt_bit-1;
			end else if(cnt_debounce == BUS_CLK_HALF_PRESCALER)begin
				fpga_bl_clk_buffer = 1;
			end else if(cnt_debounce == BUS_CLK_PRESCALER-1)begin
				fpga_bl_clk_buffer = 0;
			end
		
			dbg_buffer = !dbg_buffer;
			cnt_words = cnt_words+1;
			cnt_debounce = cnt_debounce+1;
			
			if(cnt_words==WPS)begin
				dbg_buffer = 1;
				cnt_words = 0;
				cnt_debounce = 0;
				cnt_bit = 3;
			end else begin
				dbg_buffer = 0;
			end
		end
		
		ftdi_rd_n_buffer_p = ftdi_rxf_n;
		if(ftdi_rd_n_buffer_p == 0) begin

		end
	end

endmodule
