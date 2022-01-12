class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v = {-1, -1};
        int n=nums.size(), l=0, h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target && (m==0 || nums[m-1]!=target)){
                v[0] = m;
                break;
            }
            if(nums[m]>=target) h--;
            else l++;
        }
        l = 0;
        h = n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(nums[m]==target && (m==n-1 || nums[m+1]!=target)){
                v[1] = m;
                break;
            }
            if(nums[m]>target) h--;
            else l++;
        }
        return v;
    }
};