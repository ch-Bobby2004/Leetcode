#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    string removeOccurrences(string s, string part) {
        size_t pos = s.find(part);
        while (pos >= 0 && pos < s.size()) { // check if found
            s.erase(pos, part.size());
            pos = s.find(part);
        }
        return s;
    }
};

int main() {
    Solution sol;
    string s = "daabcbaabcbc";
    string part = "abc";
    cout << sol.removeOccurrences(s, part) << endl; // Output: dab
}