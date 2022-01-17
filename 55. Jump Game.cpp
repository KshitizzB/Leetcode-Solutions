class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size(), i=n-2, r=n-1;
        while(i>=0){
            if(i+nums[i] >= r) r = i;
            i--;
        }
        return r==0;
    }
};