class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int t[n];
        t[n-1] = nums[n-1];
        t[n-2] = max(t[n-1], nums[n-2]);
        for(int i=n-3; i>=0; i--) t[i] = max(t[i+1], nums[i]+t[i+2]);
        return t[0];
    }
};