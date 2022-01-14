class Solution {
public:    
    void combos(int i, string s, int n, vector<string> &v, string digits, map<char, string> m){
        if(s.length()==n) v.push_back(s);
        else{
            for(int j=0; j<m[digits[i]].length(); j++) combos(i+1, s+m[digits[i]][j], n, v, digits, m);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        map<char, string> m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        vector<string> v;
        int n = digits.length();
        if(n) combos(0, "", n, v, digits, m);
        return v;
    }
};