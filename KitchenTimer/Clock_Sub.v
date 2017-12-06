`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:08:26 04/07/2016 
// Design Name: 
// Module Name:    Clock 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: //
//
//////////////////////////////////////////////////////////////////////////////////
module Clock_Sub(input CLK,//seconds_upper_in, seconds_lower_in, minutes_upper_in, minutes_lower_in, 
	//seconds_upper, seconds_lower, minutes_upper, minutes_lower, 
	input reset, output [6:0] seg, output [3:0] AN, input start);
 
localparam state_none = 3'b000;
localparam state_sub_seconds_lower = 3'b001;
localparam state_sub_seconds_upper = 3'b010;
localparam state_sub_minutes_lower = 3'b011;
localparam state_sub_minutes_upper = 3'b100;
localparam state_reset = 3'b101;
localparam state_done = 3'b110;

//input CLK;
//input reset;
reg [7:0] seconds_upper_in;
reg [7:0] seconds_lower_in; 
reg [7:0] minutes_upper_in;
reg [7:0] minutes_lower_in;
reg [7:0]	counter = 8'b00000000;
 reg [7:0] 	seconds_lower = 8'b00000000;
 reg [7:0] 	seconds_upper = 8'b00000000;
 reg [7:0] 	minutes_lower = 8'b00000001;
 reg [7:0] 	minutes_upper = 8'b00000001;
reg [2:0]	state = state_none;


always @ (posedge CLK)
begin
	counter <= counter + 1;
end

always @(posedge CLK)
begin
case (state)
		state_none:
		begin
			if(counter == 8'b00110010)
				state <= state_sub_seconds_lower;
		end
		
		state_sub_seconds_lower:
		begin
			if (seconds_lower > 0)
			begin
				seconds_lower <= seconds_lower - 1;
				state <= state_none;
			end
			else
			begin
				state <= state_sub_seconds_upper;
			end
		end
		
		state_sub_seconds_upper:
		begin
			if (seconds_upper > 0)
			begin
				seconds_upper <= seconds_upper - 1;
				seconds_lower <= 8'b00001001;
				state <= state_none;
			end
			else
			begin
				state <= state_sub_minutes_lower;
			end
		end
		
		state_sub_minutes_lower:
		begin
			if (minutes_lower > 0)
			begin
				minutes_lower <= minutes_lower - 1;
				seconds_upper <= 8'b00000101;
				seconds_lower <= 8'b00001001;
				state <= state_none;
			end
			else
			begin
				state <= state_sub_minutes_upper;
			end
		end
		
		state_sub_minutes_upper:
		begin
			if (minutes_upper > 0)
			begin
				minutes_upper <= minutes_upper - 1;
				minutes_lower <= 8'b00001001;
				state <= state_none;
			end
			else 
			begin
				state <= state_done;
			end
		end
		
		state_reset:
		begin
			minutes_lower <= 8'b00000001;
			minutes_upper <= 8'b00000000;
			seconds_upper <= 8'b00000000;
			seconds_lower <= 8'b00000000;
		end
		state_done:
		begin
			if(reset)
				state <= state_reset;
		end
	endcase
end
endmodule
