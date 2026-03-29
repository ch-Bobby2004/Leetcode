#include <vector>
using namespace std;

class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        k = k % n;  // only relevant modulo n

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // even row → left shift by k
                if (i % 2 == 0) {
                    if (mat[i][j] != mat[i][(j + k) % n]) {
                        return false;
                    }
                }
                // odd row → right shift by k
                else {
                    if (mat[i][j] != mat[i][(j - k + n) % n]) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};

// Time: O(m × n) — check every element once
// Space: O(1) — only variables used, no extra data structure