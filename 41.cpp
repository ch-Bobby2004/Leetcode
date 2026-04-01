class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        bool contains1 = false;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                contains1 = true;
            }
            if(nums[i]<=0 || nums[i]>n){  //{1 - n}  is our output
                nums[i] = 1;
            }
        }
        if(!contains1){
            return 1;
        }
        for(int i=0;i<n;i++){
            int num = abs(nums[i]);
            int idx = num -1;
            if(nums[idx]<0) continue;
            nums[idx] *=-1;
        }

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                return i+1;
            }
        }
        return n+1;
    }
};


// Time: O(n) → 3 passes of the array
// Space: O(1) → in-place marking