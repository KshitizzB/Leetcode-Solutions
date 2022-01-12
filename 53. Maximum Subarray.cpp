class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int r=INT_MIN, c=0;
        for(int i=0; i<nums.size(); i++){
            c += nums[i];
            r = max(r, c);
            if(c<0) c = 0;
        }
        return r;
    }
};