`timescale 1ns / 1ps
module cpu_top (
    input wire clk,
    input wire reset,
    output wire [7:0] Q,
    output wire Z,
    output wire [3:0] PC
);

    // Internal Interconnect Wires
    wire [11:0] instruction;
    wire [2:0] alu_op;
    wire load_acc;
    wire [7:0] alu_result;

    // 1. Program Counter Instance
    pc pc_inst (
        .clk(clk),
        .reset(reset),
        .pc_out(PC)
    );

    // 2. Program ROM Instance
    rom rom_inst (
        .addr(PC),
        .instruction(instruction)
    );

    // 3. Control Unit Instance
    control_unit cu_inst (
        .opcode(instruction[11:8]),
        .alu_op(alu_op),
        .load_acc(load_acc)
    );

    // 4. ALU Instance
    alu alu_inst (
        .acc(Q),
        .operand(instruction[7:0]),
        .alu_op(alu_op),
        .alu_result(alu_result)
    );

    // 5. Accumulator & Z Flag Register Instance
    register_acc_z acc_z_inst (
        .clk(clk),
        .reset(reset),
        .load_acc(load_acc),
        .alu_result(alu_result),
        .acc(Q),
        .z_flag(Z)
    );

endmodule
