`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:37:42 09/27/2026 
// Design Name: 
// Module Name:    d_flip_flop_v 
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
module d_flip_flop_v(
    input D,
    input clk,
    output reg Q
);
    always @(posedge clk) begin
        Q <= D;
    end
endmodule
