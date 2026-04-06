#include <vector>
#include <iostream>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;
    
    while (left < right) {
        int mid = left + (right - left) / 2;
        
        // Ensure mid is always even to easily check pairs
        if (mid % 2 == 1) {
            mid--;  // make mid even
        }
        
        // Check the pair condition
        if (nums[mid] == nums[mid + 1]) {
            left = mid + 2;  // Single element must be on the right side
        } else {
            right = mid;  // Single element must be on the left side
        }
    }
    
    // left will be the index of the single element
    return nums[left];
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5, 5};
    cout << "The single element is: " << singleNonDuplicate(nums) << endl;
    return 0;
}