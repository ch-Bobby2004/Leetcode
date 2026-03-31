#include <iostream>
#include <string>
using namespace std;

int lengthOfLastWord(string s) {
    int length = 0;
    int i = s.length() - 1;

    // Skip trailing spaces
    while (i >= 0 && s[i] == ' ') i--;

    // Count the last word length
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}

int main() {
    string s = "   Hello World  ";
    cout << lengthOfLastWord(s) << endl; // Output: 5
    return 0;
}

// Time: O(n) → traverse the string once
// Space: O(1) → no extra memory used