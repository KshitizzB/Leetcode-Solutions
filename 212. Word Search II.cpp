class Solution {
public:
    bool dfs(int i, int j, int r, int c, int x, int l, vector<vector<char>>& board, string s){
        if(x==l) return true;
        else if(i<0 || i>=r || j<0 || j>=c || board[i][j]!=s[x]) return false;
        char p = board[i][j];
        board[i][j] = '*';
        bool t = dfs(i+1, j, r, c, x+1, l, board, s) || dfs(i-1, j, r, c, x+1, l, board, s) || dfs(i, j+1, r, c, x+1, l, board, s) || dfs(i, j-1, r, c, x+1, l, board, s);
        board[i][j] = p;
        return t;
    }
    
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        typedef pair<int, int> p;
        vector<string> v;
        unordered_map<char, vector<p>> w;
        int r=board.size(), c=board[0].size();
        for(int i=0; i<r; i++){
            for(int j=0; j<c; j++) w[board[i][j]].push_back(p(i, j));
        }
        for(int i=0; i<words.size(); i++){
            bool x = false;
            string s = words[i];
            int l = s.length();
            for(int j=0; j<l; j++){
                if(w.find(s[j])==w.end()){
                    x = true;
                    break;
                }
            }
            if(x) continue;
            for(p j: w[s[0]]){
                if(dfs(j.first, j.second, r, c, x, l, board, s)) {
                    v.push_back(s);
                    break;
                }
            }
        }
        return v;
    }
};