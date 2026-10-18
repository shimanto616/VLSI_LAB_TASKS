`timescale 1ns / 1ps
module register_acc_z (
    input wire clk,
    input wire reset,
    input wire load_acc,
    input wire [7:0] alu_result,
    output reg [7:0] acc,
    output reg z_flag
);

    always @(posedge clk) begin
        if (reset) begin
            acc    <= 8'h00;
            z_flag <= 1'b1;
        end else if (load_acc) begin
            acc    <= alu_result;
            z_flag <= (alu_result == 8'h00) ? 1'b1 : 1'b0;
        end
    end

endmodule
