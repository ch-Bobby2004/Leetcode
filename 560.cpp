#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefix_sum_count;
        prefix_sum_count[0] = 1; 
        
        int current_sum = 0;
        int count = 0;

        for (int num : nums) {
            current_sum += num;  
            
     
            if (prefix_sum_count.find(current_sum - k) != prefix_sum_count.end()) {
                count += prefix_sum_count[current_sum - k];
            }
            
            prefix_sum_count[current_sum]++;
        }

        return count;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 1, 1};
    int k = 2;

    int result = sol.subarraySum(nums, k);
    cout << "Number of subarrays with sum " << k << ": " << result << endl;
    
    return 0;
}

// Time Complexity (TC): O(n) where n is the length of the input array.
// Space Complexity (SC): O(n) due to the hash map storing prefix sums.
