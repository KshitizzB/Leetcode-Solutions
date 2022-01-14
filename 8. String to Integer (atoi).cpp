class Solution {
public:
    int myAtoi(string s) {
        long int r=0, i=0, n=s.length(), p=0;
        while(i<n && s[i]==' ') i++;
        if(i<n && (s[i]=='-' || s[i]=='+')){
            if(s[i]=='-') p = 1;
            i++;
        }
        while(i<n && isdigit(s[i])){
            if(r>INT_MAX/10 || (r==INT_MAX/10 && s[i]-'0'>7)){
                if(p) return INT_MIN;
                else return INT_MAX;
            }
            r = r*10 + s[i++]-'0';
        }
        return p?-r:r;
    }
};