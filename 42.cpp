int trap(vector<int>& height) {
    int n = height.size(), water = 0;
    vector<int> leftMax(n), rightMax(n);
    
    leftMax[0] = height[0];
    for (int i = 1; i < n; i++)
        leftMax[i] = max(leftMax[i-1], height[i]);
    
    rightMax[n-1] = height[n-1];
    for (int i = n-2; i >= 0; i--)
        rightMax[i] = max(rightMax[i+1], height[i]);
    
    for (int i = 0; i < n; i++)
        water += min(leftMax[i], rightMax[i]) - height[i];
    
    return water;
}

// Time: O(n) 
// Space: O(n



class Solution {
public:
    int trap(vector<int>& height) {
        int n =  height.size();
        int leftmax = 0, rightmax = 0, maxheight = height[0] ,index =0, water =0;
        // max height building
        for(int i=1;i<n;i++){
            if(maxheight < height[i]){
                maxheight = height[i];
                index = i;
            }
        }
        // Left part
        for(int i=0;i<index;i++){
            if(leftmax > height[i]){
                water +=leftmax-height[i];
            }
            else{
                leftmax = height[i];
            }
        }
        //Right part
                for(int i=n-1;i>index;i--){
            if(rightmax > height[i]){
                water +=rightmax-height[i];
            }
            else{
                rightmax = height[i];
            }
        }
        return water;
    }
};