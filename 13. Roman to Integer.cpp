class Solution {
public:
    int romanToInt(string s) {
        int r=0, i=0, n=s.length();
        while(i<n){
            if(s[i]=='I'){
                if(i<n-1){
                    if(s[i+1]=='V'){
                        r += 4;
                        i++;
                    }
                    else if(s[i+1]=='X'){
                        r += 9;
                        i++;
                    }
                    else r += 1;
                }
                else r += 1;
            }
            else if(s[i]=='X'){
                if(i<n-1){
                    if(s[i+1]=='L'){
                        r += 40;
                        i++;
                    }
                    else if(s[i+1]=='C'){
                        r += 90;
                        i++;
                    }
                    else r += 10;
                }
                else r += 10;
            }
            else if(s[i]=='C'){
                if(i<n-1){
                    if(s[i+1]=='D'){
                        r += 400;
                        i++;
                    }
                    else if(s[i+1]=='M'){
                        r += 900;
                        i++;
                    }
                    else r += 100;
                }
                else r += 100;
            }
            else if(s[i]=='V') r += 5;
            else if(s[i]=='L') r += 50;
            else if(s[i]=='D') r += 500;
            else r += 1000;
            i++;
        }
        return r;
    }
};