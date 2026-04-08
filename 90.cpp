class Solution {
public:
    void solve(vector<int>& nums, int i, vector<int>& current, vector<vector<int>>& result) {
        // base case
        if (i == nums.size()) {
            result.push_back(current);
            return;
        }

        //  include current element
        current.push_back(nums[i]);
        solve(nums, i + 1, current, result);

        // backtrack
        current.pop_back();

        //  skip duplicates
        int idx = i + 1;
        while (idx < nums.size() && nums[idx] == nums[idx - 1]) {
            idx++;
        }

        //  exclude current + all duplicates
        solve(nums, idx, current, result);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> current;

        sort(nums.begin(), nums.end());

        solve(nums, 0, current, result);
        return result;
    }
};