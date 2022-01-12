class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l=0, r=0, m=0;
        while(r<prices.size()){
            if(prices[r]>prices[l]) m = max(m, prices[r]-prices[l]);
            else l = r;
            r++;
        }
        return m;
    }
};