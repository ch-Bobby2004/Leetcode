#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int m = matrix.size();
        int n = matrix[0].size();

        int row = 0;
        int col = n - 1; // start at top-right

        while (row < m && col >= 0) {
            int val = matrix[row][col];

            if (val == target) {
                return true;
            } else if (val > target) {
                col--;  // move left
            } else {
                row++;  // move down
            }
        }

        return false;
    }
};

// Time: O(m + n)
// Space: O(1)