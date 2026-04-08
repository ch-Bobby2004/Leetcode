class Solution {
public:
    // check if substring s[l..r] is palindrome
    bool isPalindrome(const string& s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }

    void solve(const string& s, int index, 
               vector<string>& current, 
               vector<vector<string>>& result) {
        if (index == s.size()) {
            result.push_back(current);
            return;
        }

        for (int i = index; i < s.size(); i++) {
            if (isPalindrome(s, index, i)) {
                current.push_back(s.substr(index, i - index + 1));
                solve(s, i + 1, current, result);
                current.pop_back(); // backtrack
            }
        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>> result;
        vector<string> current;
        solve(s, 0, current, result);
        return result;
    }
};