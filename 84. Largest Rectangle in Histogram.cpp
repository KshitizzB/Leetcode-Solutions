class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size(), r=0;
        stack<vector<int>> s;
        for(int i=0; i<n; i++){
            int t = i;
            while(!s.empty() && s.top()[1]>heights[i]){
                vector<int> v = s.top();
                t = v[0];
                r = max(r, v[1]*(i-t));
                s.pop();
            }
            s.push({t, heights[i]});
        }
        while(!s.empty()){
            vector<int> v = s.top();
            r = max(r, v[1]*(n-v[0]));
            s.pop();
        }
        return r;
    }
};