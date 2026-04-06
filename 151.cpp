class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        
        // Step 2: Reverse each word
        int start = 0;
        for (int end = 0; end <= s.length(); ++end) {
            if (end == s.length() || s[end] == ' ') {
                reverse(s.begin() + start, s.begin() + end);
                start = end + 1;
            }
        }
        
        int left = 0, right = s.length() - 1;
        
        while (left <= right && s[left] == ' ') left++;
        
        while (right >= left && s[right] == ' ') right--;
 
        string result = "";
        bool in_word = false;
        for (int i = left; i <= right; ++i) {
            if (s[i] != ' ') {
                if (!in_word && !result.empty()) result += " ";
                result += s[i];
                in_word = true;
            } else {
                in_word = false;
            }
        }
        
        return result;
    }
};