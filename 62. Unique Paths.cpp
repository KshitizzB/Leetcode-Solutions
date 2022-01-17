class Solution {
public:
    int uniquePaths(int m, int n) {
        int r[m][n];
        for(int i=0; i<n; i++) r[0][i] = 1;
        for(int i=0; i<m; i++) r[i][0] = 1;
        for(int i=1; i<m; i++){
            for(int j=1; j<n; j++) r[i][j] = r[i-1][j] + r[i][j-1];
        }
        return r[m-1][n-1];
    }
};