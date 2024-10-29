import cocotb
from cocotb.triggers import RisingEdge
import numpy as np
import struct

def float_to_binary16(value):
    """Convert a float to a 16-bit binary representation (bf16)"""
    [f] = struct.unpack('>H', struct.pack('>e', value))
    return f

@cocotb.test()
async def mac_test(dut):
    """ Test the MAC module with provided inputs and expected outputs in binary and decimal """
    
    # Load binary input data
    with open("A_binary.txt") as f:
        A_bin_values = [int(line.strip(), 2) for line in f.readlines()]
        
    with open("B_binary.txt") as f:
        B_bin_values = [int(line.strip(), 2) for line in f.readlines()]

    with open("C_binary.txt") as f:
        C_bin_values = [int(line.strip(), 2) for line in f.readlines()]
        
    with open("MAC_binary.txt") as f:
        expected_MAC_bin_values = [int(line.strip(), 2) for line in f.readlines()]
    
    # Load decimal input data and convert to binary16 representation
    with open("A_decimal.txt") as f:
        A_dec_values = [float_to_binary16(float(line.strip())) for line in f.readlines()]
        
    with open("B_decimal.txt") as f:
        B_dec_values = [float_to_binary16(float(line.strip())) for line in f.readlines()]

    with open("C_decimal.txt") as f:
        C_dec_values = [float_to_binary16(float(line.strip())) for line in f.readlines()]

    with open("MAC_decimal.txt") as f:
        expected_MAC_dec_values = [float_to_binary16(float(line.strip())) for line in f.readlines()]

    # Define test leniency for LSB
    LSB_tolerance = 2  # 2 LSB tolerance

    # Run tests with binary inputs
    for i in range(len(A_bin_values)):
        # Apply inputs
        dut.A.value = A_bin_values[i]
        dut.B.value = B_bin_values[i]
        dut.C.value = C_bin_values[i]

        # Wait for a clock cycle to propagate the values
        await RisingEdge(dut.clk)

        # Get the result from the DUT
        actual_MAC = dut.MAC.value.integer

        # Check within LSB tolerance
        expected_MAC = expected_MAC_bin_values[i]
        if abs(expected_MAC - actual_MAC) > (1 << LSB_tolerance):
            raise AssertionError(f"Binary Test failed at index {i}: "
                                 f"A={A_bin_values[i]}, B={B_bin_values[i]}, C={C_bin_values[i]}, "
                                 f"Expected MAC={expected_MAC}, Got MAC={actual_MAC}")

    print("Binary tests passed within LSB tolerance!")

    # Run tests with decimal inputs
    for i in range(len(A_dec_values)):
        # Apply inputs
        dut.A.value = A_dec_values[i]
        dut.B.value = B_dec_values[i]
        dut.C.value = C_dec_values[i]

        # Wait for a clock cycle to propagate the values
        await RisingEdge(dut.clk)

        # Get the result from the DUT
        actual_MAC = dut.MAC.value.integer

        # Check within LSB tolerance
        expected_MAC = expected_MAC_dec_values[i]
        if abs(expected_MAC - actual_MAC) > (1 << LSB_tolerance):
            raise AssertionError(f"Decimal Test failed at index {i}: "
                                 f"A={A_dec_values[i]}, B={B_dec_values[i]}, C={C_dec_values[i]}, "
                                 f"Expected MAC={expected_MAC}, Got MAC={actual_MAC}")

    print("Decimal tests passed within LSB tolerance!")

