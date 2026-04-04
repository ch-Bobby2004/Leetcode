def twoSum(nums, target):
    seen = {}  # store number -> index

    for i, num in enumerate(nums):
        complement = target - num
        if complement in seen:
            return [seen[complement], i]
        seen[num] = i
       

    return []  # just in case, though the problem guarantees a solution