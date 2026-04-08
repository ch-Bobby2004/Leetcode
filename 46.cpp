class Solution {
public:
    void solve(vector<int>& nums, int index, vector<vector<int>>& result) {
        // base case
        if (index == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = index; i < nums.size(); i++) {
            // swap to fix element at current index
            swap(nums[index], nums[i]);

            // recurse
            solve(nums, index + 1, result);

            // backtrack (undo swap)
            swap(nums[index], nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        solve(nums, 0, result);
        return result;
    }
};





// Time: O(n!*n)
// Space: O(n) recursion