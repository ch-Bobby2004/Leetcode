#include <string>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;
        for (char c : sentence) {
            letters.insert(c);
        }
        return letters.size() == 26;
    }
};

// Time: O(n), n = length of the sentence
// Space: O(1), because the set can have at most 26 letters