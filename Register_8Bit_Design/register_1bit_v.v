`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:39:45 09/27/2026 
// Design Name: 
// Module Name:    register_1bit_v 
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
module register_1bit_v(
    input D,
    input clk,
    output Q
);
    d_flip_flop_v DFF1 (
        .D(D),
        .clk(clk),
        .Q(Q)
    );
endmodule
