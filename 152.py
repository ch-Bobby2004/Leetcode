 prefix = 1
    suffix = 1
    ans = float('-inf')
    n = len(nums)

    for i in range(n):
        if prefix == 0:
            prefix = 1
        if suffix == 0:
            suffix = 1

        prefix *= nums[i]
        suffix *= nums[n - 1 - i]

        ans = max(ans, prefix, suffix)

    return ans