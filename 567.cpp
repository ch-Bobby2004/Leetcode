class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size(), m = s2.size();
        if (n > m) return false;

        vector<int> freq1(26, 0), freq2(26, 0);

        // Build frequency for s1 and first window of s2
        for (int i = 0; i < n; ++i) {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;
        }

        // Slide window over s2
        for (int i = n; i < m; ++i) {
            if (freq1 == freq2) return true;
            // Add new char to window
            freq2[s2[i] - 'a']++;
            // Remove old char from window
            freq2[s2[i - n] - 'a']--;
        }
        // Check the last window
        return (freq1 == freq2);
    }
};

// Time Complexity: O(n + m) where n = s1.length(), m = s2.length()
// Space Complexity: O(1) (fixed-size frequency arrays of 26 letters)