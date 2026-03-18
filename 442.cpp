#include <bits/stdc++.h>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
    vector<int> duplicates;  // To store duplicate numbers
    
    for (int i = 0; i < nums.size(); i++) {
        int x = abs(nums[i]);        // Get the absolute value
        int index = x - 1;           // Map number to index
        
        if (nums[index] < 0) {
            // Already negative → number x is a duplicate
            duplicates.push_back(x);
        } else {
            // Mark number x as seen by negating nums[index]
            nums[index] *= -1;
        }
    }
    
    return duplicates;
}

int main() {
    vector<int> arr = {4,3,2,7,8,2,3,1};
    vector<int> duplicates = findDuplicates(arr);

    for (int x : duplicates) {
        cout << x << " ";
    }
    // Output: 2 3
    return 0;
}


// Time	O(n) → single pass over the array
// Space	O(1) extra space (ignoring output array)




