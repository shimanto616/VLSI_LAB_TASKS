`timescale 1ns / 1ps
module pc (
    input wire clk,
    input wire reset,
    output reg [3:0] pc_out
);

    always @(posedge clk) begin
        if (reset) begin
            pc_out <= 4'b0000;
        end else begin
            pc_out <= pc_out + 1'b1;
        end
    end

endmodule
