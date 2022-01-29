class Solution {
public:
    int findMaximumXOR(vector<int>& nums) {
        int r=0, m=0, n=nums.size();
        set<int> s;
        for (int i=30; i>=0; i--){
            m |= (1<<i);
            for(int j=0; j<n; j++) s.insert(nums[j]&m);
            int t = r|(1<<i);
            for (int j: s) {
                if(s.count(t^j)){
                    r = t;
                    break;
                }
            }
        s.clear();
        }
        return r;
    }
};