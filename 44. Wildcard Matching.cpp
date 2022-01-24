class Solution {
public:
    bool isMatch(string s, string p) {
        int m=s.length(), n=p.length();
        if(n==0) return m==0;
        bool l[m+1][n+1];
        memset(l, false, sizeof(l));
        l[0][0] = true;
        for(int i=1; i<=n; i++){
            if(p[i-1]=='*') l[0][i] = l[0][i-1];
        }
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                if(p[j-1]=='*') l[i][j] = l[i][j-1] || l[i-1][j];
                else if(p[j-1]=='?' || s[i-1]==p[j-1]) l[i][j] = l[i-1][j-1];
                else l[i][j] = false;
            }
        }
        return l[m][n];
    }
};