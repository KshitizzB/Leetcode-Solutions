class Solution {
public:
    int numSquares(int n) {
        int t[n+1];
        for(int i=0; i<=n; i++) t[i] = INT_MAX;
        t[0] = 0;
        for(int i=1; i<=n; i++){
            for(int j=1; j<=i; j++){
                int s = j*j;
                if(i-s<0) break;
                t[i] = min(t[i], t[i-s]+1);
            }
        }
        return t[n];
    }
};