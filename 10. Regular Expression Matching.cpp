class Solution {
public:
    bool match(int i, int j, map<pair<int, int>, bool> &m, int x, int y, string s, string p){
        if(m.find({i, j})!=m.end()) return m[{i, j}];
        if(i>=x && j>=y) return true;
        if(j>=y) return false;
        bool c = i<x && (s[i]==p[j] || p[j]=='.');
        if(j+1<y && p[j+1]=='*'){
            m[{i, j}] = match(i, j+2, m, x, y, s, p) || (c && match(i+1, j, m, x, y, s, p));
            return m[{i, j}];
        }
        if(c){
            m[{i, j}] = match(i+1, j+1, m, x, y, s, p);
            return m[{i, j}];
        }
        m[{i, j}] = false;
        return false;
    }
    
    bool isMatch(string s, string p) {
        map<pair<int, int>, bool> m;
        return match(0, 0, m, s.length(), p.length(), s, p);
    }
};