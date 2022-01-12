class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> v;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i=0; i<n-2; i++){
            if(i==0 || nums[i]>nums[i-1]){
                int j = i+1;
                int k = n-1;
                int s = -nums[i];
                while(j<k){
                    if(j>i+1 && nums[j]==nums[j-1]){
                        j++;
                        continue;
                    }
                    if (k<n-1 && nums[k]==nums[k+1]){
                        k--;
                        continue;
                    }
                    if (s==nums[j]+nums[k]){
                        vector<int> t;
                        t.push_back(nums[i]);
                        t.push_back(nums[j]);
                        t.push_back(nums[k]);
                        v.push_back(t);
                        j++;
                        k--;
                    }
                    else if(s>nums[j]+nums[k]) j++;
                    else k--;
                }
            }
        }
        return v;
    }
};