class comp{
  public:
    bool operator()(const int &a,const int &b){
        return a>b;
    }
};

class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int x=0, r;
        priority_queue<int, vector<int>, comp> q;
        for(int i=0; i<matrix.size(); i++){
            for(int j=0; j<matrix[0].size(); j++) q.push(matrix[i][j]);
        }
        while(!q.empty() && x<k){
            r = q.top();
            q.pop();
            x++;
        }
        return r;
    }
};