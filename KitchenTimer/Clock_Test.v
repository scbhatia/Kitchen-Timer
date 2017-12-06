`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:13:13 04/07/2016
// Design Name:   Clock
// Module Name:   X:/EC311/dir/KitchenTimer/Clock_Test.v
// Project Name:  KitchenTimer
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Clock
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments://
// 
////////////////////////////////////////////////////////////////////////////////

module Clock_Test;

	// Inputs
	reg CLK;
	reg reset;
	reg [7:0] seconds_upper_in, seconds_lower_in, minutes_upper_in, minutes_lower_in;
//
	// Outputs
	wire [7:0] seconds_upper;
	wire [7:0] minutes_upper;
	wire [7:0] seconds_lower;
	wire [7:0] minutes_lower;
	//
	 Clock_Sub sub(CLK, seconds_upper_in, seconds_lower_in, minutes_upper_in, minutes_lower_in, seconds_upper, seconds_lower, minutes_upper, minutes_lower);
	 
	// Instantiate the Unit Under Test (UUT)
	initial begin
		seconds_lower_in = 8'b00000000;
		seconds_upper_in = 8'b00000000;
		minutes_lower_in = 8'b00000000;
		minutes_upper_in = 8'b00000000;
		
		#100
		
		seconds_lower_in = 8'b00000100;
		seconds_upper_in = 8'b00000100;
		minutes_lower_in = 8'b00000101;
		minutes_upper_in = 8'b00000100;
		
		reset = 0;
	end
   always   
	begin
		
		CLK = 1; 
      forever #5000000  CLK = ~CLK; 
	end
		// Add stimulus here
endmodule

