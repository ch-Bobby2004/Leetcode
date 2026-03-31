#include <iostream>
#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    int carry = 1;  // We want to add one

    for (int i = n - 1; i >= 0; i--) {
        digits[i] += carry;
        if (digits[i] == 10) {
            digits[i] = 0;
            carry = 1;
        } else {
            carry = 0;
            break;  // No further carry, stop
        }
    }

    if (carry == 1) {
        digits.insert(digits.begin(), 1);
    }

    return digits;
}

int main() {
    vector<int> digits = {9, 9, 9};
    vector<int> result = plusOne(digits);

    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;  // Output: 1 0 0 0
    return 0;
}

// Time: O(n) → traverse the digits once
// Space: O(1) extra, except possible insertion at front