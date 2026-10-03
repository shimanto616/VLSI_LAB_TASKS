`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:01:14 10/03/2026 
// Design Name: 
// Module Name:    mux8to1_4bit 
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
module mux8to1_4bit (
    input [3:0] in0, // Addition
    input [3:0] in1, // Subtraction
    input [3:0] in2, // AND
    input [3:0] in3, // OR
    input [3:0] in4, // XOR
    input [3:0] in5, // NOT
    input [3:0] in6, // Reserved
    input [3:0] in7, // Reserved
    input [2:0] sel, // Selection line
    output reg [3:0] out
);

    always @(*) begin
        case(sel)
            3'b000: out = in0;
            3'b001: out = in1;
            3'b010: out = in2;
            3'b011: out = in3;
            3'b100: out = in4;
            3'b101: out = in5;
            3'b110: out = in6;
            3'b111: out = in7;
            default: out = 4'b0000;
        endcase
    end

endmodule
