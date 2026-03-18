class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x;   // handle 0 and 1

        int left = 1, right = x / 2;
        int ans = 0;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (mid <= x / mid) {  // safe: avoids overflow
                ans = mid;         // mid is a possible answer
                left = mid + 1;    // try to find a bigger sqrt
            } else {
                right = mid - 1;   // mid*mid > x → reduce
            }
        }

        return ans;
    }
};

// Time	O(log x) (binary search)
// Space	O(1) (constant extra space)




class Solution {
public:
    int mySqrt(int x) {
        long left = 0;
        long right = x;
        
        while (left <= right) {
            long mid = left + (right - left) / 2;
            long square = mid * mid;

            if (square == x) {
                return mid;
            } 
            else if (square < x) {
                left = mid + 1;
            } 
            else {
                right = mid - 1;
            }
        }
        
        return right; // floor of sqrt(x)
    }
};