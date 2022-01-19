class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int t[n], r=1;
        for(int i=0; i<n; i++) t[i] = 1;
        for(int i=n-1; i>=0; i--){
            for(int j=i+1; j<n; j++){
                if(nums[i]<nums[j]){
                    t[i] = max(t[i], t[j]+1);
                    r = max(r, t[i]);
                }
            }
        }
        return r;
    }
};