class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int n = s.length();
        bool r[n+1];
        for(int i=0; i<n; i++) r[i] = false;
        r[n] = true;
        for(int i=n-1; i>=0; i--){
            for(int j=0; j<wordDict.size(); j++){
                int l = wordDict[j].length();
                if((i+l<=n) && (s.substr(i, l)==wordDict[j])) r[i] = r[i+l];
                if(r[i]) break;
            }
        }
        return r[0];
    }
};