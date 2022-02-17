class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        map<string, vector<string>> m;
        set<string> s;
        deque<string> q;
        int r = 1;
        wordList.push_back(beginWord);
        for(auto &i:wordList){
            for(int j=0; j<i.length(); j++) m[i.substr(0, j) + "*" + i.substr(j+1)].push_back(i);
        }
        s.insert(beginWord);
        q.push_back(beginWord);
        while(!q.empty()){
            int l = q.size();
            for(int i=0; i<l; i++){
                string x = q.front();
                q.pop_front();
                if(x == endWord) return r;
                for(int j=0; j<x.length(); j++){
                    for(auto &k:m[x.substr(0, j) + "*" + x.substr(j+1)]){
                        if(s.find(k)==s.end()){
                            s.insert(k);
                            q.push_back(k);
                        }
                    }
                }
            }
            r += 1;
        }
        return 0;
    }
};