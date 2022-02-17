class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        if(accumulate(gas.begin(), gas.end(), 0)<accumulate(cost.begin(), cost.end(), 0)) return -1;
        int s=0, r=0;
        for(int i=0; i<gas.size(); i++){
            s += gas[i] - cost[i];
            if(s<0){
                s = 0;
                r = i + 1;
            }
        }
        return r;
    }
};