class Solution {
public:
    void solve(vector<int>& nums, int index, vector<int>& current, vector<vector<int>>& result) {
        // Base case
        if (index == nums.size()) {
            result.push_back({current});
            return;
        }

        // Include current element
        current.push_back(nums[index]);
        solve(nums, index + 1, current, result);

        // Backtrack
        current.pop_back();

        // Exclude current element
        solve(nums, index + 1, current, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;

        solve(nums, 0, current, result);
        return result;
    }
};