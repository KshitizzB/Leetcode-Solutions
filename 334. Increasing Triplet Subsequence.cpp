class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int n=nums.size(), x=INT_MAX, y=INT_MAX;
        if(n<3) return false;
        for(int i=0; i<n; i++){
            if(x>nums[i]) x = nums[i];
            else if(x<nums[i]){
                y = min(y, nums[i]);
                if(nums[i]>y) return true;
            }
        }
        return false;
    }
};