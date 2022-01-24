class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size(), r=0;
        if(n>1){
            int i=0, j=n-1, lm=height[i], rm=height[j];
            while(i<j){
                if(lm<=rm){
                    i++;
                    lm = max(lm, height[i]);
                    r += lm-height[i];
                }
                else{
                    j--;
                    rm = max(rm, height[j]);
                    r += rm-height[j];
                }
            }
        }
        return r;
    }
};