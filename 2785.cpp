#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;

        // Step 1: Collect vowels
        for (char c : s) {
            if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
                c=='A'||c=='E'||c=='I'||c=='O'||c=='U') {
                vowels.push_back(c);
            }
        }

        // Step 2: Sort vowels
        sort(vowels.begin(), vowels.end());

        // Step 3: Replace vowels
        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
                s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U') {
                s[i] = vowels[j++];
            }
        }

        return s;
    }
};

// Time: O(n log n) (due to sorting vowels)
// Space: O(n) (for storing vowels)