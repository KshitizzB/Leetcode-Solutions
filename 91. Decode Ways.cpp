class Solution {
public:
    int numDecodings(string s) {
        int n = s.length();
        map<int, int> m;
        m[n] = 1;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='0') m[i] = 0;
            else m[i] = m[i+1];
            if(i+1<n && (s[i]=='1' || (s[i]=='2' && s[i+1]>='0' && s[i+1]<='6'))) m[i] += m[i+2];
        }
        return m[0];
    }
};