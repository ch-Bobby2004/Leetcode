class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZero = 0; // position to place the next non-zero

        // First pass: move all non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastNonZero++] = nums[i];
            }
        }

        // Fill the remaining positions with 0
        for (int i = lastNonZero; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};

// Time complexity: O(n)
// ✅ Space complexity: O(1) (in-place, no extra array)