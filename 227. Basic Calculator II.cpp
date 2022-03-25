class Solution {
public:
    int calculate(string s) {
        long int n = 0;
        char c = '+';
        stack<long int> r;
        s += '+';
        for(int i=0; i<s.size(); i++){
            if(isdigit(s[i])) n = n*10 + s[i]-'0';
            else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/'){
                if(c=='+') r.push(n);
                else if(c=='-') r.push(-n);
                else{
                    long int t = r.top();
                    r.pop();
                    c=='*'?t*=n:t/=n;
                    r.push(t);
                }
                n = 0;
                c = s[i];
            }
        }
        n = 0;
        while(!r.empty()){
            n += r.top();
            r.pop();
        }
        return n;
    }
};