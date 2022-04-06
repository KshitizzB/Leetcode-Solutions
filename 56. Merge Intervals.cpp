class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b){
            return a[0] < b[0];
        });
        vector<vector<int>> v = {intervals[0]};
        for(int i=1; i<intervals.size(); i++){
            int n = v.size();
            vector<int> t = v[n-1];
            if(intervals[i][0]<=t[1]) v[n-1][1] = max(v[n-1][1], intervals[i][1]);
            else v.push_back(intervals[i]);
        }
        return v;
    }
};