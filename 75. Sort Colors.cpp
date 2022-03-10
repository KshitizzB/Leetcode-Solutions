class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0, j=nums.size()-1, k=0;
        while(k<=j){
            if(nums[k]==0){
                int t = nums[i];
                nums[i] = nums[k];
                nums[k] = t;
                i += 1;
            }
            else if(nums[k]==2){
                int t = nums[j];
                nums[j] = nums[k];
                nums[k] = t;
                j -= 1;
                k -= 1;
            }
            k += 1;
        }
    }
};