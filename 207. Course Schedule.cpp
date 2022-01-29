class Solution {
public:
    bool dfs(int i, set<int> &s, map<int, vector<int>> &m){
        if(s.find(i)!=s.end()) return false;
        if(m.find(i)==m.end()) return true;
        s.insert(i);
        for(int j=0; j<m[i].size(); j++){
            if(!dfs(m[i][j], s, m)) return false;
        }
        s.erase(i);
        return true;
    }
    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        set<int> s;
        map<int, vector<int>> m;
        for(int i=0; i<prerequisites.size(); i++) m[prerequisites[i][0]].push_back(prerequisites[i][1]);
        for(int i=0; i<numCourses; i++){
            if(!dfs(i, s, m)) return false;
        }
        return true;
    }
};