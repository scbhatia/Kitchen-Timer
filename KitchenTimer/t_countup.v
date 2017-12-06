`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:44:45 04/15/2016
// Design Name:   countup
// Module Name:   X:/My Documents/KitchenTimer/t_countup.v
// Project Name:  KitchenTimer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: countup
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_countup;

	// Inputs
	reg clk;
	reg reset;
	reg start;

	// Outputs
	wire [6:0] seg;
	wire [3:0] AN;

	// Instantiate the Unit Under Test (UUT)
	countup uut (
		.seg(seg), 
		.AN(AN), 
		.clk(clk), 
		.reset(reset), 
		.start(start)
	);

	always #5 clk = ~clk;
	
	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;
		start = 0;
		#100;
        
	end
      
endmodule

