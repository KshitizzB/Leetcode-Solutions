class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if(m==0) nums1 = nums2;
        else if(n>0){
            vector<int> r;
            int i=0, j=0;
            if(nums2[j]>nums1[i]) r.push_back(nums1[i++]);
            while(i<m && j<n){
                if(nums2[j]>nums1[i]) r.push_back(nums1[i++]);
                else r.push_back(nums2[j++]);
            }
            while(i<m) r.push_back(nums1[i++]);
            while(j<n) r.push_back(nums2[j++]);
            nums1 = r;
        }
    }
};