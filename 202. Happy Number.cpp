class Solution {
public:
    bool isHappy(int n) {
        set<int> s;
        while(s.find(n)==s.end()){
            s.insert(n);
            int r=0, t=n;
            while(t){
                int d = t%10;
                r += d*d;
                t /= 10;
            }
            n = r;
            if(n==1) return true;
        }
        return false;
    }
};