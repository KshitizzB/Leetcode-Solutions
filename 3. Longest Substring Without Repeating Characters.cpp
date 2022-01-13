class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> t;
        int i=0, j=0, n=s.length();
        while(j<n && t.find(s[j])==t.end()) t.insert(s[j++]);
        int r = t.size();
        while(j<n){
            while(i<j && t.find(s[j])!=t.end()) t.erase(s[i++]);
            t.insert(s[j++]);
            r = r>t.size()?r:t.size();
        }
        return r;
    }
};