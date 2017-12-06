`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:06:10 04/15/2016 
// Design Name: 
// Module Name:    Kitchen_Timer 
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
module Kitchen_Timer(output [7:0] seg, output [3:0] AN, input clk, reset, start, increase, min, sec, pause);
	wire slowclock, ignore, push, pushdown, pushup;
	reg [3:0] bin0, bin1, bin2, bin3;
	reg [3:0] b0, b1, b2, b3;
	
	clock_divider #(.COUNTER_DIV(26)) clkdivtrig(slowclock, clk, reset, start);
	Debouncer debounce(clk, push, increase, pushdown, pushup);
	
	always @ (posedge push)
	begin
	end


endmodule
