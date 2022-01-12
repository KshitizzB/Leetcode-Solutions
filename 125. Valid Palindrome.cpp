class Solution {
public:
    bool isPalindrome(string s) {
        string p;
        int n = s.length();
        for(int i=0; i<n; i++){
            if(isalnum(s[i])) p += tolower(s[i]);
        }
        n = p.length();
        for(int i=0; i<n; i++){
            if(p[i]!=p[n-i-1]) return false;
        }
        return true;
    }
};