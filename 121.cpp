#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);           // Update min price so far
            maxProfit = max(maxProfit, price - minPrice); // Update max profit
        }

        return maxProfit;
    }
};

Time: O(n) – single pass
Space: O(1) – constant extra space