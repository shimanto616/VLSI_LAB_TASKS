

# Digital Logic & 8-Bit CPU Design in Verilog

This repository contains Verilog HDL implementations, module designs, and testbenches for digital logic components progressing up to a **single-cycle Mini 8-Bit Accumulator CPU** (Instruction Set 5). All hardware components were designed, synthesized, and verified using **Xilinx ISE Design Suite**.

---

## Software & Tools Used

* **Xilinx ISE Design Suite 14.7**: Primary IDE used for Verilog design entry, RTL schematic generation, synthesis, and project management.
* **ISim (Xilinx Integrated Simulator)**: Used for behavioral simulation and timing verification of custom testbenches (`tb_cpu_top.v`).
* **Verilog HDL**: Hardware Description Language used for structural and behavioral modeling across all sub-modules.

---

## Repository Structure

```
├── ALU/                    # Arithmetic Logic Unit design modules & testbenches
├── CPU_8Bit_Set5/          # Top-level 8-Bit CPU design implementing Set 5 instructions
├── Eight_Bit_Full_Adder/   # 8-bit ripple carry adder built from full adder components
├── Full_Adder/             # 1-bit full adder module and logic gates
├── Inverter/               # Basic NOT gate implementation
├── NAND, NOR/              # Basic universal logic gate implementations
├── Register_8Bit_Design/   # 8-bit registers and flip-flop storage modules
├── Lab Reports/            # Project documentation and PDF reports (cpu_8bit_report.pdf)
└── Readme.md               # Repository documentation
```

---

## Core Project: Mini 8-Bit Accumulator CPU 

The primary deliverable in this repository (CPU_8Bit_Set5) is a single-cycle accumulator-based processor architecture:

- Supported Opcodes: LDI, ADD, OR, NOT, SHR


Architecture Highlights:

- Program Counter (PC): 4-bit sequential counter targeting a 16-location Program ROM.

- Control Unit & ROM: Fully combinational (always @(*)) for single-cycle fetch, decode, and execute execution.

- ALU & Accumulator: 8-bit data path handling arithmetic, logic, and bit-shift operations with synchronous Zero Flag (Z) updates.

---

## How to Run in Xilinx ISE

- Open Xilinx ISE and create a new project targeting your device family (e.g., Spartan-6).

- Add Source Files: Include all .v files from the targeted directory (e.g., CPU_8Bit_Set5/ or ALU/).

- Run Behavioral Simulation:

- Switch the view from Implementation to Simulation in the Design pane.

- Select the relevant testbench (e.g., tb_cpu_top.v).

- Double-click Simulate Behavioral Model under the ISim Simulator process hierarchy.

- Inspect Waveforms: Verify register updates, opcode execution, and zero flag states in the ISim waveform viewer. 





