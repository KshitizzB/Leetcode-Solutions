class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size(), x=n/2;
        map<int, int> m;
        for(int i=0; i<n; i++){
            if(m.find(nums[i])!=m.end()){
                if((m[nums[i]]+1)>x) return nums[i];
                else m[nums[i]] += 1;
            }
            else m[nums[i]] = 1;
        }
        return nums[0];
    }
};