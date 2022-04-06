class Solution {
public:
    double power(double x, int n){
        if(n==0) return 1;
        double r = power(x, n/2);
        r *= r;
        return n%2?r*x:r;
    }
    
    double myPow(double x, int n) {
        if(x==0) return 0;
        double r = power(x, abs(n));
        return n<0?1/r:r;
    }
};