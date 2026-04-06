def productExceptSelf(nums):
    n = len(nums)
    output = [1] * n  # Step 1: Initialize the output array with 1

    # Step 2: Calculate the product of all elements to the left of each index
    left_product = 1
    for i in range(n):
        output[i] = left_product
        left_product *= nums[i]

    # Step 3: Calculate the product of all elements to the right of each index
    right_product = 1
    for i in range(n - 1, -1, -1):
        output[i] *= right_product
        right_product *= nums[i]

    return output