class Solution {
public:
    string countAndSay(int n) {
        string s = "1";
        for(int i=2; i<=n; i++){
            string t;
            int j=0, l=s.length();
            while(j<l){
                int c = 1;
                char p = s[j];
                while(s[j]==s[j+1]){
                    c++;
                    j++;
                }
                t += to_string(c) + p;
                j++;
            }
            s = t;
        }
        return s;
    }
};