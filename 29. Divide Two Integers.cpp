class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1) return INT_MAX;
        int s = ((dividend>0 && divisor<0) || (dividend<0 && divisor>0))?-1:1;
        long int r=0, x=abs(dividend), y=abs(divisor);
        while(x>=y){
            int p = 0;
            while(x>=(y<<p)) p++;
            r += 1<<(p-1);
            x -= y<<(p-1);
        }
        return s==-1?-r:r;
    }
};