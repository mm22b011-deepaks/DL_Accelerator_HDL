# Adjust paths based on file structure
INT8_PATH = "mac_verif/test_cases/int8 MAC/"
BF16_PATH = "mac_verif/test_cases/bf16 MAC/"

def read_binary_file(file_path):
    """Read binary values from a file and return as a list of integers."""
    with open(file_path, 'r') as f:
        lines = f.readlines()
    return [int(line.strip(), 2) for line in lines]

@cocotb.test()
async def test_mac_unpipelined(dut):
    """Test the unpipelined MAC module."""
    # Load int8 test vectors
    A_values_int8 = read_binary_file(INT8_PATH + "A_binary.txt")
    B_values_int8 = read_binary_file(INT8_PATH + "B_binary.txt")
    C_values_int8 = read_binary_file(INT8_PATH + "C_binary.txt")
    MAC_expected_int8 = read_binary_file(INT8_PATH + "MAC_binary.txt")
    
    # Test S1 (int8 * int8 + int32 -> int32)
    for i, (A, B, C, MAC_exp) in enumerate(zip(A_values_int8, B_values_int8, C_values_int8, MAC_expected_int8)):
        dut.a_in <= A
        dut.b_in <= B
        dut.c_in <= C
        dut.s1_or_s2_in <= 1  # S1 operation

        await RisingEdge(dut.clk)  # Wait for the result to be computed
        await RisingEdge(dut.clk)

        result = dut.result.value.integer
        assert abs(result - MAC_exp) <= 2, f"S1 Test case {i} failed: Got {result}, Expected {MAC_exp}"

    # Load bf16 test vectors
    A_values_bf16 = read_binary_file(BF16_PATH + "A_binary.txt")
    B_values_bf16 = read_binary_file(BF16_PATH + "B_binary.txt")
    C_values_bf16 = read_binary_file(BF16_PATH + "C_binary.txt")
    MAC_expected_bf16 = read_binary_file(BF16_PATH + "MAC_binary.txt")
    
    # Test S2 (bf16 * bf16 + fp32 -> fp32)
    for i, (A, B, C, MAC_exp) in enumerate(zip(A_values_bf16, B_values_bf16, C_values_bf16, MAC_expected_bf16)):
        dut.a_in <= A
        dut.b_in <= B
        dut.c_in <= C
        dut.s1_or_s2_in <= 0  # S2 operation

        await RisingEdge(dut.clk)  # Wait for the result to be computed
        await RisingEdge(dut.clk)

        result = dut.result.value.integer
        assert abs(result - MAC_exp) <= 2, f"S2 Test case {i} failed: Got {result}, Expected {MAC_exp}"
