from collections import defaultdict

class Solution:
    def subarraySum(self, nums, k):
        # Initialize the hash map with the base case
        prefix_sum_count = defaultdict(int)
        prefix_sum_count[0] = 1  # Base case: sum of 0 appears once (empty subarray)
        
        current_sum = 0
        count = 0
        
        # Iterate over the array
        for num in nums:
            current_sum += num  # Update the running sum
            
            # Check if there exists a subarray that sums to k
            if current_sum - k in prefix_sum_count:
                count += prefix_sum_count[current_sum - k]
            
            # Update the hash map with the current sum
            prefix_sum_count[current_sum] += 1
        
        return count