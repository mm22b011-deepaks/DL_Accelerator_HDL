import cocotb
from cocotb_coverage.coverage import *

counter_coverage = coverage_section(
    CoverPoint('top.get_A_x', vname='get_A_x', bins = list(range(0, 8))),
    CoverPoint('top.get_B_y', vname='get_B_y', bins = list(range(0, 8))),
    CoverPoint('top.get_C_z', vname='get_C_z', bins = list(range(0, 32))),
    CoverPoint('top.s1_or_s2_tcs', vname='s1_or_s2_tcs', bins = list(range(0, 2))),
    
    CoverPoint('top.EN_get_A', vname='EN_get_A', bins = list(range(0,2))),
    CoverPoint('top.EN_get_B', vname='EN_get_B', bins = list(range(0,2))),
    CoverPoint('top.EN_get_C', vname='EN_get_C', bins = list(range(0,2))),
    CoverPoint('top.EN_s1_or_s2', vname='EN_s1_or_s2', bins = list(range(0,2))),
    
    CoverCross('top.cross_cover', items = ['top.get_A_x', 'top.get_B_y', 'top.get_C_z', 'top.s1_or_s2_tcs'])
)
@counter_coverage
def model_mac(EN_get_A: int, EN_get_B: int, EN_get_C: int, EN_s1_or_s2: int, get_A_x: int, get_B_y: int, get_C_z: int, s1_or_s2_tcs: int) -> int:
    if EN_get_A and EN_get_B and EN_get_C and EN_s1_or_s2:
        # Extract signed 8-bit values for a and b
        a = get_A_x & 0xFF
        b = get_B_y & 0xFF

        # Convert to signed integers if they are in 8-bit two's complement form
        if a & 0x80:
            a -= 256
        if b & 0x80:
            b -= 256

        # Calculate the absolute values of a and b
        abs_a = abs(a)
        abs_b = abs(b)

        # Multiply the absolute values
        product = abs_a * abs_b

        # Adjust the sign of the product based on the sign of a and b
        if (a < 0) ^ (b < 0):
            product = -product

        # Add the signed value of c (32-bit input)
        c = get_C_z & 0xFFFFFFFF
        if c & 0x80000000:
            c -= 0x100000000

        # Calculate the final MAC result
        result = product + c

        # Constrain the result to 32 bits and convert to two's complement representation if negative
        result &= 0xFFFFFFFF  # Keeps only the lower 32 bits

        # Return result as a signed 32-bit integer (with leading 1's for negative values)
        return result

    if EN_get_A and EN_get_B and EN_get_C and not EN_s1_or_s2:
        # Extract sign, exponent, and mantissa from a and b (16-bit inputs)
        a = get_A_x & 0xFFFF
        b = get_B_y & 0xFFFF
        
        sign_a = (a >> 15) & 0x1
        exp_a = (a >> 7) & 0xFF  # 8-bit exponent
        mant_a = a & 0x7F  # 7-bit mantissa
        
        sign_b = (b >> 15) & 0x1
        exp_b = (b >> 7) & 0xFF  # 8-bit exponent
        mant_b = b & 0x7F  # 7-bit mantissa

        mant_a = (1 << 7) | mant_a  # Add leading 1 for a (8 bits)
        mant_b = (1 << 7) | mant_b  # Add leading 1 for b (8 bits)

        product_mantissa = mant_a * mant_b 

        adjusted_exponent = exp_a + exp_b - 127

        # Normalize the product mantissa and adjust the exponent if needed
        if product_mantissa & (1 << 15):  # Check if the leading bit (15th) is set
            if (product_mantissa >> 7) & 0x1 and (product_mantissa & 0x7F) != 0:
                product_mantissa += 256  
            product_mantissa >>= 1  
            adjusted_exponent += 1 
        else: 
            if (product_mantissa >> 6) & 0x1 and (product_mantissa & 0x3F) != 0: 
                product_mantissa += 128  
            if product_mantissa & (1 << 15):  
                product_mantissa >>= 1  
                adjusted_exponent += 1 
                
        product_mantissa &= 0x7F 

        product_sign = sign_a ^ sign_b
        
        # Normalize mantissa by padding with 16 zeros to form a 23 bit
        normalized_mantissa = (product_mantissa << 16)  
        
        # 32-bit floating point c input
        c = get_C_z & 0xFFFFFFFF
        
        # Extract sign, exponent, and mantissa from c (32-bit input)
        sign_c = (c >> 31) & 0x1
        exp_c = (c >> 23) & 0xFF  # 8-bit exponent
        mant_c = c & 0x7FFFFF  # 23-bit mantissa

        mant_c = (1 << 23) | mant_c  # Add leading 1 for c (24 bits)

        # Align exponents for floating point addition
        if adjusted_exponent > exp_c:
            shift = adjusted_exponent - exp_c
            mant_c >>= shift
        elif exp_c > adjusted_exponent:
            shift = exp_c - adjusted_exponent
            normalized_mantissa >>= shift
            adjusted_exponent = exp_c

        # Now both mantissa and exponents are aligned, perform addition
        if product_sign == sign_c:
            result_mantissa = normalized_mantissa + mant_c
            result_sign = product_sign
        else:
            if normalized_mantissa > mant_c:
                result_mantissa = normalized_mantissa - mant_c
                result_sign = product_sign
            else:
                result_mantissa = mant_c - normalized_mantissa
                result_sign = sign_c

        # Determine the bit length of result_mantissa
        mantissa_bits = result_mantissa.bit_length()  # Get the number of bits in result_mantissa

        # Check if the MSB of result_mantissa is set for normalization
        if result_mantissa & (1 << (mantissa_bits - 1)):  # Check the most significant bit
            result_mantissa >>= 1  # Right shift to normalize
            adjusted_exponent += 1  # Increment exponent

        # Round result_mantissa to 23 bits
        # Extract the most significant 23 bits
        rounded_mantissa = (result_mantissa >> (mantissa_bits - 23)) & 0x7FFFFF

        # Check the 24th bit (the next least significant bit after the 23rd) for rounding
        if (result_mantissa >> (mantissa_bits - 24)) & 0x1:  # Check if 24th bit from MSB is 1
            rounded_mantissa += 1  # Add 1 to perform rounding

        # Handle overflow in mantissa rounding
        #if rounded_mantissa & (1 << 23):  # If rounding causes an overflow beyond 23 bits
        #    rounded_mantissa >>= 1  # Right shift the mantissa to normalize
        #   adjusted_exponent += 1  # Increment exponent

        # Prepare final result with sign, adjusted exponent, and 23-bit rounded mantissa
        final_result = (product_sign << 31) | ((adjusted_exponent & 0xFF) << 23) | (normalised_mantissa & 0x7FFFFF)

        # Return the final result as a 32-bit integer
        return final_result & 0xFFFFFFFF


    return 0



