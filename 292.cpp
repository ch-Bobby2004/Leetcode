class Solution {
public:
    bool canWinNim(int n) {
        // If n is a multiple of 4, you will lose
        return n % 4 != 0;
    }
};