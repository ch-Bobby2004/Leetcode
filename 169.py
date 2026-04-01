def majorityElement(nums):
    count = 0
    candidate = None
    
    for num in nums:
        if count == 0:
            candidate = num
        
        if num == candidate:
            count += 1
        else:
            count -= 1
    
    return candidate

# Time Complexity:
# O(n) — we traverse the array exactly once
# Space Complexity:
#  O(1) — only two variables (count and candidate), no extra memory