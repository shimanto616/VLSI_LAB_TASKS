`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   04:57:42 09/27/2026
// Design Name:   register_8bit_v
// Module Name:   /home/ise/Shared_folder/Register_8Bit_Design/register_8bit_v_tb.v
// Project Name:  Register_8Bit_Design
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: register_8bit_v
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module register_8bit_v_tb;

	// Inputs
	reg D0,D1,D2,D3,D4,D5,D6,D7;
	reg clk;

	// Outputs
	wire Q0,Q1,Q2,Q3,Q4,Q5,Q6,Q7;

	// Instantiate the Unit Under Test (UUT)
	register_8bit_v uut (
		.D0(D0), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4), 
		.D5(D5), 
		.D6(D6), 
		.D7(D7), 
		.clk(clk), 
		.Q0(Q0), 
		.Q1(Q1), 
		.Q2(Q2), 
		.Q3(Q3), 
		.Q4(Q4), 
		.Q5(Q5), 
		.Q6(Q6), 
		.Q7(Q7)
	);

	initial begin
		clk = 0;
		forever #5 clk = ~clk;
	end
	initial begin
		// Initialize Inputs
		D0 = 0; D1 = 0; D2 = 0; D3 = 0; D4 = 0; D5 = 0; D6 = 0; D7 = 0; #10;
		D0 = 0; D1 = 1; D2 = 0; D3 = 1; D4 = 0; D5 = 1; D6 = 0; D7 = 1; #10;
		D0 = 1; D1 = 0; D2 = 1; D3 = 0; D4 = 1; D5 = 0; D6 = 1; D7 = 0; #10;
		D0 = 1; D1 = 1; D2 = 1; D3 = 1; D4 = 1; D5 = 1; D6 = 1; D7 = 1; #10;
		$finish;
	end
      
endmodule

