`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:52:30 03/10/2018
// Design Name:   bootloader
// Module Name:   C:/developer/svn_projects/hound/SW/cpld/HoundCPLD/simulation.v
// Project Name:  HoundCPLD
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: bootloader
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module sim;

	// Inputs
	reg clk;
	reg fpga_done;
	reg fpga_init_b;
	reg ftdi_clk;
	reg [7:0] ftdi_data;
	reg ftdi_rxf_n;
	reg ftdi_gpio_0;
	reg ftdi_gpio_1;

	// Outputs
	wire fpga_bl_clk;
	wire fpga_bl_data;
	wire fpga_program_b;
	wire [3:0]debug;
	wire [7:0]data_buffer_debug;
	wire dbg;
	wire ftdi_rd_n;
	
	parameter WPS = 256;//4*8*32

	// Instantiate the Unit Under Test (UUT)
	bootloader uut (
		.clk(clk), 
		.fpga_done(fpga_done), 
		.fpga_bl_clk(fpga_bl_clk), 
		.fpga_bl_data(fpga_bl_data), 
		.fpga_init_b(fpga_init_b), 
		.fpga_program_b(fpga_program_b), 
		.ftdi_clk(ftdi_clk), 
		.ftdi_data(ftdi_data), 
		.dbg(dbg), 
		.ftdi_rxf_n(ftdi_rxf_n), 
		.ftdi_rd_n(ftdi_rd_n), 
		.ftdi_gpio_0(ftdi_gpio_0), 
		.ftdi_gpio_1(ftdi_gpio_1)
		//.debug(debug),
		//.data_buffer_debug(data_buffer_debug)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		fpga_done = 0;
		fpga_init_b = 0;
		ftdi_clk = 0;
		ftdi_data = 12'hA5A;
		ftdi_rxf_n = 1;
		ftdi_gpio_0 = 0;
		ftdi_gpio_1 = 0;

		clk = 1;
		#1;
		ftdi_rxf_n = 0;
		clk = 0;
		#1;
		clk = 1;
		#1;
		clk = 0;
		#1;
		ftdi_gpio_0 = 1;
		ftdi_gpio_1 = 1;
		clk = 1;
		#1;
		clk = 0;
		#1;
		ftdi_gpio_0 = 1;
		ftdi_gpio_1 = 0;
		clk = 1;
		#1;
		clk = 0;
		
		
		//ftdi_data = 12'h0;;

		repeat(8) begin
			repeat(WPS) begin
			ftdi_clk = 1;
			#1;
			ftdi_clk = 0;
			#1;
			end
			ftdi_data = ftdi_data+1;
		end
		ftdi_rxf_n = 1;
		ftdi_clk = 1;
		#1;
		ftdi_clk = 0;
		#1;
		ftdi_clk = 1;
		#1;
		ftdi_clk = 0;
		#1;
	end
      
endmodule

