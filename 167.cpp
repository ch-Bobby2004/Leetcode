#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            int sum = numbers[left] + numbers[right];

            if (sum == target) {
                return {left + 1, right + 1}; // 1-based indexing
            } 
            else if (sum < target) {
                left++;
            } 
            else {
                right--;
            }
        }

        return {}; // no solution (though problem guarantees one)
    }
};

// Time: O(n)
// Space: O(1) (no extra space used)