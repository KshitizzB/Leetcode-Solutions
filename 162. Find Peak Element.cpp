class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size(), l=0, h=n-1;
        while(l<=h){
            int m = (l+h)/2;
            if(m==0){
                if(n==1) return 0;
                else if(nums[0]>nums[1]) return 0;
                else l += 1;
            }
            else if(m==n-1){
                if(nums[n-1]>nums[n-2]) return n-1;
                else h -= 1;
            }
            else if(nums[m]>nums[m-1] && nums[m]>nums[m+1]) return m;
            else if(nums[m]<nums[m+1]) l = m+1;
            else h = m-1;
        }
        return -1;
    }
};