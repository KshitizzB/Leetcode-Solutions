class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        vector<int> v;
        for(int i=0; i<nums.size(); i++){
            int d = target - nums[i];
            if (m.find(d) == m.end()){
                m[nums[i]] = i;
            }
            else{
                v.push_back(i);
                v.push_back(m[d]);
                break;
            }
        }
        return v;
    }
};