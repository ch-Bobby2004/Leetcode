int lengthOfLongestSubstring(string s) {
    vector<int> lastIndex(128, -1);

    int left = 0, maxLength = 0;

    for (int right = 0; right < s.size(); right++) {
        char c = s[right];

        if (lastIndex[c] >= left) {
            left = lastIndex[c] + 1;
        }

        lastIndex[c] = right;
        maxLength = max(maxLength, right - left + 1);
    }

    return maxLength;
}

// 1. O(n) Time
// Each character processed once
// No backtracking
// ✅ 2. O(1) Space
// Fixed array of size 128