class Solution {
public:
    int titleToNumber(string columnTitle) {
        int r=0, n=columnTitle.length();
        for(int i=0; i<n; i++) r += pow(26, n-i-1)*(columnTitle[i] & 31);
        return r;
    }
};