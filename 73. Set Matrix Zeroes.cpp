class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int r=matrix.size(), c=matrix[0].size();
        set<int> x, y;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(matrix[i][j]==0){
                    x.insert(i);
                    y.insert(j);
                }
            }
        }
        for(auto &i:x){
            for(int j=0; j<c; j++) matrix[i][j] = 0;
        }
        for(auto &i:y){
            for(int j=0; j<r; j++) matrix[j][i] = 0;
        }
    }
};