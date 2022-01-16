class Solution {
public:
    void part(int i, int n, string s, vector<string> &t, vector<vector<string>> &v){
        if(i==n){
            v.push_back(t);
            return;
        }
        for(int j=i; j<n; j++){
            int p=1, q=i, r=j;
            while(q<r){
                if(s[q]!=s[r]){
                    p = 0;
                    break;
                }
                q++;
                r--;
            }
            if(p){
                t.push_back(s.substr(i, j-i+1));
                part(j+1, n, s, t, v);
                t.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> v;
        vector<string> t;
        part(0, s.length(), s, t, v);
        return v;
    }
};