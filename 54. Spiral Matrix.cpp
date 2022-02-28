class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int p=0, q=matrix.size()-1, r=0, s=matrix[0].size()-1;
        while(p<=q && r<=s){
            for(int i=r; i<=s; i++) v.push_back(matrix[p][i]);
            p += 1;
            for(int i=p; i<=q; i++) v.push_back(matrix[i][s]);
            s -= 1;
            if(p<=q && r<=s){
                for(int i=s; i>=r; i--) v.push_back(matrix[q][i]);
                q -= 1;
                for(int i=q; i>=p; i--) v.push_back(matrix[i][r]);
                r += 1;
            }
        }
        return v;
    }
};