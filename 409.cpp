#include <unordered_set>
using namespace std;

class Solution {
public:
    int longestPalindrome(string s) {
        unordered_set<char> st;
        int length = 0;
        
        for (char c : s) {
            if (st.count(c)) {
                st.erase(c);
                length += 2;
            } else {
                st.insert(c);
            }
        }
        
        return length + (!st.empty() ? 1 : 0);
    }
};

// Time: O(n)
// Space: O(1) (max 52 chars: A–Z, a–z)