module clk_div16(clk_out, clk_in, reset, start);

	parameter COUNTER_DIV = 23;
   
   input clk_in;
	input reset;
	input start;
   output clk_out;

   reg [COUNTER_DIV-1:0] counter;

   always @ (posedge clk_in or posedge reset)
	begin
		if(reset)
			counter <= 0;
		/*else if(counter == 10000000) 
			counter <= 0;*/
		
		else if(start)
			counter <= counter + 1;
	end
 
	assign clk_out = ((counter == 10000000)?1'b1:1'b0); 
	
endmodule 