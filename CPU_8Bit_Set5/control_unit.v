`timescale 1ns / 1ps
module control_unit (
    input wire [3:0] opcode,
    output reg [2:0] alu_op,
    output reg load_acc
);

    always @(*) begin
        case (opcode)
            4'b0001: begin // LDI
                alu_op   = 3'b000;
                load_acc = 1'b1;
            end
            4'b0010: begin // ADD
                alu_op   = 3'b001;
                load_acc = 1'b1;
            end
            4'b0101: begin // OR
                alu_op   = 3'b010;
                load_acc = 1'b1;
            end
            4'b0111: begin // NOT
                alu_op   = 3'b011;
                load_acc = 1'b1;
            end
            4'b1001: begin // SHR
                alu_op   = 3'b100;
                load_acc = 1'b1;
            end
            default: begin // NOP / Unused opcodes
                alu_op   = 3'b000;
                load_acc = 1'b0;
            end
        endcase
    end

endmodule
