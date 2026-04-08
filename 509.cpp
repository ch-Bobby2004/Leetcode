class Solution {
public:
    int fib(int n) {
        if (n <= 1) return n;

        int prev2 = 0; // F(0)
        int prev1 = 1; // F(1)

        for (int i = 2; i <= n; i++) {
            int curr = prev1 + prev2;
            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
    }
};

// Instead of recursion (which is slow), use iteration + two variables.

// Complexity
// Time: O(n)
// Space: O(1)