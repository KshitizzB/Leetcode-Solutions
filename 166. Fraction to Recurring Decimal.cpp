class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator==0) return "0";
        int p = (numerator<0)^(denominator<0)?1:0;
        numerator = abs(numerator);
        denominator = abs(denominator);
        string r;
        r += to_string(numerator/denominator);
        long int x = numerator%denominator;
        if(x!=0){
            r += ".";
            map<int, int> m;
            int i, t=0;
            while(x>0 && !t) {
                if(m.find(x)!=m.end()){
                    i = m[x];
                    t = 1;
                    break;
                }
                else m[x] = r.size();
                x *= 10;
                r += to_string(x/denominator);
                x %= denominator;
            }
            if(t){
                r += ")";
                r.insert(i, "(");
            }    
        }
        if(p && r[0]!='-') r = '-'+r;
        if(!p && r[0]=='-') r.erase(0, 1);
        return r;
    }
};