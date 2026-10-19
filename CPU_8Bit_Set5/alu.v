`timescale 1ns / 1ps

module alu (
    input wire [7:0] acc,
    input wire [7:0] operand,
    input wire [2:0] alu_op,
    output reg [7:0] alu_result
);

    always @(*) begin
        case (alu_op)
            3'b000: alu_result = operand;         // LDI
            3'b001: alu_result = acc + operand;   // ADD
            3'b010: alu_result = acc | operand;   // OR
            3'b011: alu_result = ~acc;            // NOT
            3'b100: alu_result = {1'b0, acc[7:1]};// SHR (Logical Right Shift)
            default: alu_result = 8'h00;
        endcase
    end

endmodule
