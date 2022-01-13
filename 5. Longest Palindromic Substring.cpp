class Solution {
public:
    void longPalindrome(string s, int i, int j, int &l, string &r){
        int n = s.length();
        while(i>=0 && i<n && j>=0 && j<n && s[i]==s[j]){
            if(j-i+1 > l){
                l = j-i+1;
                r = s.substr(i, l);
            }
            i--;
            j++;
        }
    }
    
    string longestPalindrome(string s) {
        string r;
        int l=0;
        for(int i=0; i<s.length(); i++){
            longPalindrome(s, i, i, l, r);
            longPalindrome(s, i, i+1, l, r);
        }
        return r;
    }
};