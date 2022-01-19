class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        if(n==1) return nums[0];
        int p=1, q=1, r=INT_MIN;
        for(int i=0; i<n; i++){
            int a = p*nums[i];
            int b = q*nums[i];
            p = max(a, b);
            p = max(p, nums[i]);
            q = min(a, b);
            q = min(q, nums[i]);
            r = max(r, p);
        }
        return r;
    }
};