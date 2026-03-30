#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;  // position for next valid element

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }

        return k;
    }
};

// Time: O(n)
// Space: O(1)


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
                int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[left] == val) {
                nums[left] = nums[right];
                right--;  // shrink array
            } else {
                left++;
            }
        }

        return left;
    }
};