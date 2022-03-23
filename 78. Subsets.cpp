class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size(), s=pow(2, n);
        vector<vector<int>> v;
        for(int i=0; i<s; i++){
            vector<int> t;
            for(int j=0; j<n; j++){
                if(i&(1<<j)) t.push_back(nums[j]);
            }
            v.push_back(t);
        }
        return v;
    }
};