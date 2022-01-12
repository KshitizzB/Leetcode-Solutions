class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        int x = 0;
        while(x<strs[0].size()){
            s += strs[0][x];
            for(int i=0; i<strs.size(); i++){
                if(!(x<strs[i].size() && s[x]==strs[i][x])){
                    if(x==0) s = "";
                    else s.pop_back();
                    return s;
                }
            }
            x++;
        }
        return s;
    }
};