`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    00:16:19 04/15/2016 
// Design Name: 
// Module Name:    countdown 
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
module countdown(output reg [3:0] bin0, bin1, bin2, bin3, input clk);
	wire slowclock;
	reg [15:0] big_bin;
	reg [3:0] binval0, binval1, binval2, binval3;
	
	clock_divider #(.COUNTER_DIV(26)) clkdiv2 (slowclock, clk, reset, start);
	initial begin
		bin0 <= 4'b0000;
		bin1 <= 4'b0000;
		bin2 <= 4'b0001;
		bin3 <= 4'b0000;
	end
	
	always @ (posedge clk)
	begin
		//if (reset)
			//begin
				//bin0 <= 4'b0000;
				//bin1 <= 4'b0000;
				//bin2 <= 4'b0001;
				//bin3 <= 4'b0000;
			//end
			begin
			if (bin0 == 4'b0000)
			begin
				bin0 <= 4'b1001;
				if (bin1 == 4'b0000)
				begin
					bin1 <= 4'b0101;
					if (bin2 == 4'b0000)
					begin
						bin2 <= 4'b1001;
						if (bin3 == 4'b0000)
							bin3 <= 4'b0101;
						else
							bin3 <= bin3 - 4'b0001;
					end
					else
						bin2 <= bin2 - 4'b0001;
				end
				else
					bin1 <= bin1 - 4'b0001;
			end
			else
				bin0 <= bin0 - 4'b0001;
		end
	end

endmodule
