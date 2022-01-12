class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size(), s=(n*(n+1))/2, x=0;
        for(int i=0; i<n; i++) x += nums[i];
        return s-x;
    }
};