`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:26:09 04/15/2016
// Design Name:   countdown
// Module Name:   X:/My Documents/KitchenTimer/t_countdown.v
// Project Name:  KitchenTimer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: countdown
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_countdown;

	// Inputs
	reg clk;
	// Outputs
	reg [3:0] bin0, bin1, bin2, bin3;
	
	// Instantiate the Unit Under Test (UUT)
	countdown cd(bin0, bin1, bin2, bin3, clk);

	always #5 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		bin0 = 4'b0000;
		bin1 = 4'b0000;
		bin2 = 4'b0001;
		bin3 = 4'b0000;
		#100;
        
	end
      
endmodule

