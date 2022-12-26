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

module simulation;

	// Inputs
	reg clk;
	reg fpga_done;
	reg fpga_init_b;
	reg fpga_program_b;
	reg ftdi_clk;
	reg [15:0] ftdi_data;
	reg ftdi_rxf_n;
	reg ftdi_gpio_0;
	reg ftdi_gpio_1;

	// Outputs
	wire fpga_bl_clk;
	wire fpga_bl_data;
	wire dbg;
	wire ftdi_rd_n;

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
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		fpga_done = 0;
		fpga_init_b = 0;
		fpga_program_b = 0;
		ftdi_clk = 0;
		ftdi_data = 0;
		ftdi_rxf_n = 0;
		ftdi_gpio_0 = 0;
		ftdi_gpio_1 = 0;

		ftdi_clk = 1;
		#100;
		ftdi_rxf_n = 0;
		ftdi_clk = 0;
		#100;
		ftdi_clk = 1;
		#100;
		ftdi_clk = 0;
		#100;

		repeat(1024) begin
		// Wait 100 ns for global reset to finish
		ftdi_clk = 1;
		#100;
		ftdi_clk = 0;
		#100;
      end
		// Add stimulus here

	end
      
endmodule

