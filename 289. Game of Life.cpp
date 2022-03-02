class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int r=board.size(), c=board[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                int l = 0;
                if(i-1>=0){
                    if(j-1>=0 && (board[i-1][j-1]==1 || board[i-1][j-1]==3)) l += 1;
                    if(board[i-1][j]==1 || board[i-1][j]==3) l += 1;
                    if(j+1<c && (board[i-1][j+1]==1 || board[i-1][j+1]==3)) l += 1;
                }
                if(j-1>=0 && (board[i][j-1]==1 || board[i][j-1]==3)) l += 1;
                if(j+1<c && (board[i][j+1]==1 || board[i][j+1]==3)) l += 1;
                if(i+1<r){
                    if(j-1>=0 && (board[i+1][j-1]==1 || board[i+1][j-1]==3)) l += 1;
                    if(board[i+1][j]==1 || board[i+1][j]==3) l += 1;
                    if(j+1<c && (board[i+1][j+1]==1 || board[i+1][j+1]==3)) l += 1;
                }
                if(board[i][j]==0 && l==3) board[i][j] = 2;
                else if(board[i][j]==1 && (l==2 || l==3)) board[i][j] = 3;
            }
        }
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(board[i][j]==1) board[i][j] = 0;
                else if(board[i][j]==2 || board[i][j]==3) board[i][j] = 1;
            }
        }
    }
};