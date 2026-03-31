from typing import List

def plus_one(digits: List[int]) -> List[int]:
    n = len(digits)
    carry = 1  # We want to add one

    for i in range(n-1, -1, -1):
        digits[i] += carry
        if digits[i] == 10:
            digits[i] = 0
            carry = 1
        else:
            carry = 0
            break  # No need to continue if no carry

    if carry == 1:
        digits.insert(0, 1)

    return digits

# Example usage
print(plus_one([1,2,3]))  # Output: [1,2,4]
print(plus_one([9,9,9]))  # Output: [1,0,0,0]