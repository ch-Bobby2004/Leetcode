// Sum of Two Arrays Representing Numbers (IMPORTANT 🔥)

// 👉 Each array is a number (digit by digit)

// Example
// A = [1,2,3]  → 123
// B = [9,8]    → 98
// Result = [2,2,1] → 221

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> findArraySum(vector<int>& a, int n, vector<int>& b, int m) {
    int i = n - 1, j = m - 1;
    int carry = 0;
    vector<int> ans;

    while(i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if(i >= 0) sum += a[i--];
        if(j >= 0) sum += b[j--];

        ans.push_back(sum % 10);
        carry = sum / 10;
    }

    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> a = {1, 2, 3};  // 123
    vector<int> b = {9, 8};     // 98

    vector<int> result = findArraySum(a, a.size(), b, b.size());

    cout << "Sum: ";
    for (int digit : result) {
        cout << digit << " ";
    }

    return 0;
}