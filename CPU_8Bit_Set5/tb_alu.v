`timescale 1ns / 1ps

module tb_alu;

    reg [7:0] acc;
    reg [7:0] operand;
    reg [2:0] alu_op;
    wire [7:0] alu_result;

    alu uut (
        .acc(acc),
        .operand(operand),
        .alu_op(alu_op),
        .alu_result(alu_result)
    );

    initial begin
        // Test LDI: operand 0x0F
        acc = 8'h00; operand = 8'h0F; alu_op = 3'b000; #10;
        
        // Test OR: 0x0F | 0xA0 = 0xAF
        acc = 8'h0F; operand = 8'hA0; alu_op = 3'b010; #10;
        
        // Test NOT: ~0xAF = 0x50
        acc = 8'hAF; operand = 8'h00; alu_op = 3'b011; #10;
        
        // Test SHR: 0x50 >> 1 = 0x28
        acc = 8'h50; operand = 8'h00; alu_op = 3'b100; #10;
        
        // Test ADD: 0x28 + 0xD8 = 0x00 (modulo 256 overflow)
        acc = 8'h28; operand = 8'hD8; alu_op = 3'b001; #10;

        $stop;
    end

endmodule