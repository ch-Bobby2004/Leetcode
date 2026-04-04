#include <bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>& nums) {
    int n = nums.size();
    int prefix = 1, suffix = 1;
    int ans = INT_MIN;

    for (int i = 0; i < n; i++) {
        // If product becomes 0, reset
        if (prefix == 0) prefix = 1;
        if (suffix == 0) suffix = 1;

        prefix *= nums[i];
        suffix *= nums[n - 1 - i];

        ans = max({ans, prefix, suffix});
    }

    return ans;
}