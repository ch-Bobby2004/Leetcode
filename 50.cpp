class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) return 1.0; 
        if (x == 0) return 0.0; 
        if (x == 1 ) return 1.0; 
        if (x == -1 && n%2==0 ) return 1.0; 
        if (x == -1 && n%2!=0 ) return -1.0; 
        
        long binForm = n;
        if (binForm < 0) {
            x = 1 / x;
            binForm = -binForm; 
        }
        
        double result = 1;
        while (binForm > 0) {
            if (binForm % 2 == 1) { 
                result *= x;
            }
            x *= x; 
            binForm /= 2; 
        }
        
        return result;
    }
};

// Time Complexity: O(log n) — because the loop iterates logarithmically with respect to the absolute value of n.
// Space Complexity: O(1) — because the space used does not depend on the size of n, and we only