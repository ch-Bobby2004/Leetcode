class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int write = 0, read = 0;

        while (read < n) {
            char curr = chars[read];
            int count = 0;

            // count occurrences
            while (read < n && chars[read] == curr) {
                read++;
                count++;
            }

            // write character
            chars[write++] = curr;

            // write count manually
            if (count > 1) {
                int start = write;

                // write digits in reverse
                while (count > 0) {
                    chars[write++] = (count % 10) + '0';
                    count /= 10;
                }

                // reverse digits to correct order
                reverse(chars.begin() + start, chars.begin() + write);
            }
        }

        return write;
    }
};

// Why this is faster
// ❌ No to_string() (avoids extra memory + function overhead)
// ✅ Direct digit writing using % 10
// ✅ In-place reversal (very cheap)
// ✅ Same O(n), but lower constant factor

// O(n)
// No extra space



// #include <iostream>
// #include <vector>
// #include <string>
// using namespace std;

// class Solution {
// public:
//     int compress(vector<char>& chars) {
//         int n = chars.size();
//         int write = 0; // position to write compressed chars
//         int read = 0;  // position to read original chars

//         while (read < n) {
//             char current = chars[read];
//             int count = 0;

//             // Count consecutive same characters
//             while (read < n && chars[read] == current) {
//                 read++;
//                 count++;
//             }

//             // Write the character
//             chars[write++] = current;

//             // Write the count if greater than 1
//             if (count > 1) {
//                 string countStr = to_string(count);
//                 for (char c : countStr) {
//                     chars[write++] = c;
//                 }
//             }
//         }

//         return write; // new length
//     }
// };

// int main() {
//     Solution sol;
//     vector<char> chars = {'a','a','b','b','c','c','c'};
//     int len = sol.compress(chars);

//     cout << "Compressed length: " << len << endl;
//     cout << "Compressed chars: ";
//     for (int i = 0; i < len; i++) {
//         cout << chars[i] << " ";
//     }
//     cout << endl;
// }