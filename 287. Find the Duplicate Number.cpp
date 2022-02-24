class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0, j=0, k=0;
        do{
            i = nums[i];
            j = nums[nums[j]];
        }
        while(i!=j);
        do{
            i = nums[i];
            k = nums[k];
        }
        while(i!=k);
        return i;
    }
};