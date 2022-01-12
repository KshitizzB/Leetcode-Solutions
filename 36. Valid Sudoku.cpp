class Solution {
public:
    bool isValid(vector<vector<char>>& board, int m, int n){
        set<char> p, q, r;
        for(int i=0; i<9; i++){
            char t = board[m][i];
            if(p.find(t)!=p.end()) return false;
            else if(t!='.') p.insert(t);
        }
        for(int i=0; i<9; i++){
            char t = board[i][n];
            if(q.find(t)!=q.end()) return false;
            else if(t!='.') q.insert(t);
        }
        m -= m%3;
        n -= n%3;
        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                char t = board[i+m][j+n];
                if(r.find(t)!=r.end()) return false;
                else if(t!='.') r.insert(t);
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(!isValid(board, i, j)) return false;
            }
        }
        return true;
    }
};