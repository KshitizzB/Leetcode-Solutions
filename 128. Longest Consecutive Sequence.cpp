class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> s;
        for(int i=0; i<nums.size(); i++) s.insert(nums[i]);
        int r = 0;
        for(int i=0; i<nums.size(); i++){
            if(s.find(nums[i]-1)==s.end()){
                int t = 0;
                while(s.find(nums[i]+t)!=s.end()) t += 1;
                r = max(r, t);
            }
        }
        return r;
    }
};