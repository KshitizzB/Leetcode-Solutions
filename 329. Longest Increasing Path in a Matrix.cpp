class Solution {
public:
    int path(int i, int j, int p, int x, int y, vector<vector<int>> matrix, map<pair<int, int>, int> &m){
        if(i<0 || i==x || j<0 || j==y || matrix[i][j]<=p) return 0;
        if(m.find({i, j})!=m.end()) return m[{i, j}];
        int r = max(1, path(i+1, j, matrix[i][j], x, y, matrix, m)+1);
        r = max(r, path(i-1, j, matrix[i][j], x, y, matrix, m)+1);
        r = max(r, path(i, j+1, matrix[i][j], x, y, matrix, m)+1);
        r = max(r, path(i, j-1, matrix[i][j], x, y, matrix, m)+1);
        m[{i, j}] = r;
        return r;
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int x=matrix.size(), y=matrix[0].size(), r=INT_MIN;
        map<pair<int, int>, int> m;
        for(int i=0; i<x; i++){
            for(int j=0; j<y; j++) path(i, j, -1, x, y, matrix, m);
        }
        for(auto& i:m) r = max(r, i.second);
        return r;
    }
};