class Solution {
public:
    int firstUniqChar(string s) {
        int r = INT_MAX;
        map<char, int> p, q;
        for(int i=0; i<s.length(); i++){
            if(!p[s[i]]) q[s[i]] = i;
            p[s[i]]++;
        }
        for(auto& i:p){
            if(i.second==1) r = min(r, q[i.first]);
        }
        return r==INT_MAX?-1:r;
    }
};