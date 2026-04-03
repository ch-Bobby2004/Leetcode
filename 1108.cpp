#include <string>
using namespace std;

class Solution {
public:
    string defangIPaddr(string address) {
        string result;
        for (char c : address) {
            if (c == '.') {
                result += "[.]";
            } else {
                result += c;
            }
        }
        return result;
    }
};

// Time: O(n), where n = length of address
// Space: O(n), for the new string