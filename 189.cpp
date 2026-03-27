class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       int n = nums.size();
       k = k % n;   //to avoid extra loop without this code work   k = 7 % 5 = 2
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
        
    }
};



class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> temp(n);
        
        for(int i = 0; i < n; i++) {
            temp[(i + k) % n] = nums[i];
        }
        
        nums = temp;
    }
};



// O(n)
// O(1)


