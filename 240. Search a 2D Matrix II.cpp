class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size()-1, r=0, c=matrix[0].size()-1;
        while(r<=m && c>=0){
            if(matrix[r][c]==target) return true;
            else if(matrix[r][c]<target) r += 1;
            else c -= 1;
        }
        return false;
    }
};