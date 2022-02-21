class Solution {
public:
    int mySqrt(int x) {
        int l=1, h=92680, r;
        while(l<=h){
            long m=(l+h)/2, s=m*m;
            if(s==x) return m;
            else if(s<x){
                l += 1;
                r = m;
            }
            else h -= 1;
        }
        return x<2?x:r;
    }
};