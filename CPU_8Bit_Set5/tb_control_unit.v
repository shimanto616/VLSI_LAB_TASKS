`timescale 1ns / 1ps

module tb_control_unit;

    reg [3:0] opcode;
    wire [2:0] alu_op;
    wire load_acc;

    control_unit uut (
        .opcode(opcode),
        .alu_op(alu_op),
        .load_acc(load_acc)
    );

    initial begin
        // Test LDI (0001)
        opcode = 4'b0001; #10;
        
        // Test ADD (0010)
        opcode = 4'b0010; #10;
        
        // Test OR (0101)
        opcode = 4'b0101; #10;
        
        // Test NOT (0111)
        opcode = 4'b0111; #10;
        
        // Test SHR (1001)
        opcode = 4'b1001; #10;
        
        // Test NOP (0000)
        opcode = 4'b0000; #10;

        $stop;
    end

endmodule