`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:58:42 04/21/2016 
// Design Name: 
// Module Name:    Main 
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
module Main(output reg [6:0] seg, output reg [3:0] AN, input timer, input reset, input clk, input [5:0] num, input setmin, input setsec, output reg [3:0] bin0, bin1, bin2, bin3);

	reg upstart = 0;
	reg downstart = 0;
	reg [5:0] min, sec;
	wire [6:0] segtemp00, segtemp0, segtemp1;
	wire [3:0] ANtemp00, ANtemp0, ANtemp1;
	reg sec0, sec1, min0, min1;
	
	always @ (*) begin
		sec0  <= bin0;
		sec1 <= bin1;
		min0 <= bin2;
		min1 <= bin3;
	end
	
	always @ (posedge clk) begin
		if (setmin) begin
			min = num;
			bin0 = min %10;
			bin1 = min / 10;
		end
		else if (setsec) begin
			sec = num;
			bin2 = sec % 10;
			bin3 = sec / 10;
		end
		else if (timer) begin
			upstart = 1;
			AN = ANtemp0;
			seg = segtemp0;
		end
		else if (!timer) begin
			downstart = 1;
			AN = ANtemp1;
			seg = segtemp1;
		end
		else begin
			upstart = 0;
			downstart = 0;
			AN = ANtemp00;
			seg = segtemp00;
		end
	end
	
	SegDisplay sg1(segtemp00, ANtemp00, sec0, sec1, min0, min1, clk);
	Clock_Add clkadd(clk, reset, segtemp0, ANtemp0, upstart);
	Clock_Sub clksub(clk, reset, segtemp1, ANtemp1, downstart);


endmodule
