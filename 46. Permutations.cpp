class Solution {
public:
    void perm(vector<int>& nums, vector<vector<int>>& v, int n){
        if(n==1){
            vector<int> t;
            for(int i=0; i<nums.size(); i++) t.push_back(nums[i]);
            v.push_back(t);
        }
        for(int i=0; i<n; i++){
            perm(nums, v, n-1);
            if(n%2 == 1) swap(nums[0], nums[n-1]);
            else swap(nums[i], nums[n-1]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> v;
        perm(nums, v, nums.size());
        return v;
    }
};