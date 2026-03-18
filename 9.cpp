class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x < 0) return false;
        
        long rev = 0;
        int original = x;
        
        while(x != 0){
            int digit = x % 10;
            rev = rev * 10 + digit;
            x /= 10;
        }
        
        return rev == original;
    }
};

// Time	O(log n)
// Space	O(1)




class Solution {
public:
    bool isPalindrome(int x) {
        
        // Negative numbers or numbers ending with 0 (except 0 itself) are not palindrome
        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;
        
        int rev = 0;
        
        while(x > rev){
            rev = rev * 10 + x % 10; // add last digit to reversed part
            x /= 10;                 // remove last digit from x
        }
        
        // For even digits: x == rev
        // For odd digits: x == rev/10
        return (x == rev || x == rev/10);
    }
};


// Time	O(log₁₀(n)) → only digits processed
// Space	O(1) → no extra space