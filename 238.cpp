#include <vector>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n, 1);

        // First pass: calculate the prefix products
        int prefix_product = 1;
        for (int i = 0; i < n; ++i) {
            output[i] = prefix_product;
            prefix_product *= nums[i];
        }

        // Second pass: calculate the suffix products and update the output
        int suffix_product = 1;
        for (int i = n - 1; i >= 0; --i) {
            output[i] *= suffix_product;
            suffix_product *= nums[i];
        }

        return output;
    }
};

// Time Complexity: O(n) — We go through the array twice (once for the left products and once for the right products), so the time complexity is linear in terms of the array length.
// Space Complexity: O(1) (ignoring the output array) — We only use a few extra variables (left_product and right_product), so the space complexity is constant (apart from the output array).