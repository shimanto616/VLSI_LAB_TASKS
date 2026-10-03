`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:43:17 10/03/2026 
// Design Name: 
// Module Name:    subtractor_4bit 
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
module subtractor_4bit (
    input [3:0] A,
    input [3:0] B,
    output [3:0] Diff,
    output Bout
);

    wire [3:0] B_inv;
    wire carry_out;

    // Bitwise inversion of B
    assign B_inv = ~B;

    // Instantiate existing 4-bit adder: A + (~B) + 1
    adder_4bit add_sub_inst (
        .A(A),
        .B(B_inv),
        .Cin(1'b1),      // Adding 1 for 2's complement
        .Sum(Diff),
        .Cout(carry_out)
    );

    // In 2's complement subtraction, Bout (borrow out) is ~carry_out
    assign Bout = ~carry_out;

endmodule
