class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> p, q;
        for(int i=0; i<s.size(); i++) p[s[i]]++;
        for(int i=0; i<t.size(); i++) q[t[i]]++;
        return p==q;
    }
};