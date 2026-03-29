#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        string result = "";  // acts like a stack

        for (char c : s) {
            if (!result.empty() && result.back() == c) {
                result.pop_back(); // remove last character (duplicate)
            } else {
                result.push_back(c); // add current character
            }
        }

        return result;
    }
};

int main() {
    Solution sol;
    string s = "abbaca";
    cout << sol.removeDuplicates(s) << endl; // Output: "ca"
}


// Time: O(n) → each char is pushed/popped at most once
// Space: O(n) → result string as a stack