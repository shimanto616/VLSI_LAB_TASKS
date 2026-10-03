`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:37:54 10/03/2026 
// Design Name: 
// Module Name:    adder_4bit 
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
module adder_4bit (
    input [3:0] A,
    input [3:0] B,
    input Cin,
    output [3:0] Sum,
    output Cout
);

    wire c1, c2, c3; // Internal carry signals

    // Instantiate 4 Full Adders
    full_adder fa0 (.a(A[0]), .b(B[0]), .cin(Cin), .sum(Sum[0]), .cout(c1));
    full_adder fa1 (.a(A[1]), .b(B[1]), .cin(c1),  .sum(Sum[1]), .cout(c2));
    full_adder fa2 (.a(A[2]), .b(B[2]), .cin(c2),  .sum(Sum[2]), .cout(c3));
    full_adder fa3 (.a(A[3]), .b(B[3]), .cin(c3),  .sum(Sum[3]), .cout(Cout));

endmodule
