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
module Clock_Add(input CLK, reset, input [3:0] seconds_upper_in, seconds_lower_in, minutes_upper_in, minutes_lower_in, output reg [3:0] seconds_upper, seconds_lower, minutes_upper, minutes_lower,
	output [6:0] seg, output [3:0] AN, input start);

reg [7:0] counter;
reg [2:0] state;

parameter state_next = 3'b001;
parameter state_none = 3'b000;
parameter state_add_seconds_lower = 3'b010;
parameter state_add_seconds_upper = 3'b011;
parameter state_add_minutes_lower = 3'b100;
parameter state_add_minutes_upper = 3'b101;
parameter state_reset = 3'b110;

initial begin
	state <= state_none;
	counter <= 8'b00000000;
	seconds_lower <= 8'b00000000;
	seconds_upper <= 8'b00000000;
	minutes_lower <= 8'b00000000;
	minutes_upper <= 8'b00000000;

end

always @ (posedge CLK)
begin
	counter <= counter + 1;
end

always @(posedge CLK)
begin
case (state)
		state_none:
		begin
			if(counter == 8'b01100100)
				state <= state_add_seconds_lower;
			if(seconds_lower == 8'b00001010)
				state <= state_add_seconds_upper;
			if(seconds_upper == 8'b00000110)
				state <= state_add_minutes_lower;
			if(minutes_lower == 8'b00001010)
				state <= state_add_minutes_upper;
			if(minutes_upper == 8'b00000110)
				state <= state_reset;
			
		end
		
		state_add_seconds_lower:
		begin
			seconds_lower <= seconds_lower + 1;
			state <= state_none;
		end
		
		state_add_seconds_upper:
		begin
			seconds_lower <= 8'b00000000;
			seconds_upper <= seconds_upper + 1;
			state <= state_none;
		end
		
		state_add_minutes_lower:
		begin
			seconds_upper <= 8'b00000000;
			seconds_lower <= 8'b00000000;
			minutes_lower <= minutes_lower + 1;
			state <= state_none;
		end
		
		state_add_minutes_upper:
		begin
			minutes_lower <= 8'b00000000;
			seconds_upper <= 8'b00000000;
			seconds_lower <= 8'b00000000;
			minutes_upper <= minutes_upper + 1;
			state <= state_none;
		end
		state_reset:
		begin
			minutes_lower <= 8'b00000000;
			minutes_upper <= 8'b00000000;
			seconds_upper <= 8'b00000000;
			seconds_lower <= 8'b00000000;
			state <= state_none;
		end
	endcase
end
endmodule
