class Solution {
public:
    bool dfs(int i, int j, int r, int c, int x, int l, set<pair<int, int>> &s, vector<vector<char>>& board, string word){
        pair<int, int> p = make_pair(i, j);
        if(x==l) return true;
        else if(i<0 || i>=r || j<0 || j>=c || board[i][j]!=word[x] || s.find(p)!=s.end()) return false;
        s.insert(p);
        bool t = dfs(i+1, j, r, c, x+1, l, s, board, word) || dfs(i-1, j, r, c, x+1, l, s, board, word) || dfs(i, j+1, r, c, x+1, l, s, board, word) || dfs(i, j-1, r, c, x+1, l, s, board, word);
        s.erase(p);
        return t;
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        int r=board.size(), c=board[0].size(), l=word.length();
        set<pair<int, int>> s;
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++){
                if(dfs(i, j, r, c, 0, l, s, board, word)) return true;
            }
        }
        return false;
    }
};