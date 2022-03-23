class Solution {
public:
    int getSum(int a, int b) {
        while(b){
            unsigned int t = a&b;
            a = a^b;
            b = t<<1;
        }
        return a;
    }
};