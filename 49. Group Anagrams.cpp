class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> v;
        map<map<char, int>, vector<string>> m;
        for(int i=0; i<strs.size(); i++){
            map<char, int> t;
            string s = strs[i];
            for(int i=0; i<s.length(); i++) t[s[i]]++;
            m[t].push_back(s);
        }
        for(auto& i:m) v.push_back(i.second);
        return v;
    }
};