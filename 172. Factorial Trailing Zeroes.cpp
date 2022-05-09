class Solution {
public:
    int trailingZeroes(int n) {
        int r = 0;
        for(int i=5; n/i>=1; i*=5) r += n/i;
        return r;
    }
};