class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length();
        if(n==1) return true;
        bool c = isupper(word[1]);
        if(c){
            if(islower(word[0])) return false;
        }
        for(int i=1; i<n; i++){
            if(c){
                if(islower(word[i])) return false;
            }
            else if(isupper(word[i])) return false;
        }
        return true;
    }
};