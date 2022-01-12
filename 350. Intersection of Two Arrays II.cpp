class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        map<int, int> m, n;
        int p=nums1.size(), q=nums2.size();
        for(int i=0; i<p; i++) m[nums1[i]] += 1;
        for(int i=0; i<q; i++) n[nums2[i]] += 1;
        for(int i=0; i<p; i++){
            if(m[nums1[i]] && n[nums1[i]]){
                for(int j=0; j<min(m[nums1[i]], n[nums1[i]]); j++){
                    v.push_back(nums1[i]);
                    m[nums1[i]] -= 1;
                    n[nums1[i]] -= 1;
                }
            }
        }
        return v;
    }
};