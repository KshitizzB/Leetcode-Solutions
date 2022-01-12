class Solution {
public:
    int maxArea(vector<int>& height) {
        int r=-1, i=0, j=height.size()-1;
        while(i<j){
            r = max(r, (j-i)*min(height[i], height[j]));
            if(height[i]>height[j]) j--;
            else i++;
        }
        return r;
    }
};