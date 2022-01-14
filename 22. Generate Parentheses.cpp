class Solution {
public:
    void combos(int o, int c, int n, string s, vector<string> &v){
        if(o==n && c==n){
            v.push_back(s);
            return;
        }
        if(o<n) combos(o+1, c, n, s+"(", v);
        if(c<o) combos(o, c+1, n, s+")", v);
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> v;
        combos(0, 0, n, "", v);
        return v;
    }
};