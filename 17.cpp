class Solution {
public:
    vector<string> keypad = {
        "",     
        "",     
        "abc",  
        "def",  
        "ghi",  
        "jkl",  
        "mno", 
        "pqrs", 
        "tuv",  
        "wxyz"  /
    };

    void solve(const string& digits, int index, string& current, vector<string>& result) {
        if (index == digits.size()) {
            result.push_back(current);
            return;
        }

        int num = digits[index] - '0';
        for (char ch : keypad[num]) {
            current.push_back(ch);
            solve(digits, index + 1, current, result);
            current.pop_back(); // backtrack
        }
    }

    vector<string> letterCombinations(string digits) {
        vector<string> result;
        if (digits.empty()) return result;

        string current;
        solve(digits, 0, current, result);
        return result;
    }
};