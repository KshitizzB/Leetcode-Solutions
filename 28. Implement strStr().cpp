class Solution {
public:
    int strStr(string haystack, string needle) {
        int r=0, i;
        for(i=0; i<haystack.length(); i++){
            if(r==needle.length()) break;
            if(needle[r]==haystack[i]) r++;
            else{
                if(r>0) i -= r;
                r = 0;
            }
        }
        return r<needle.length()?-1:i-r;
    }
};