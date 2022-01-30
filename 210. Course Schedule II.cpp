class Solution {
public:
    bool dfs(int i, set<int> &s, set<int> &c, vector<int> &v, map<int, vector<int>> &m){
        if(c.find(i)!=c.end()) return false;
        if(s.find(i)!=s.end()) return true;
        c.insert(i);
        for(int j=0; j<m[i].size(); j++){
            if(!dfs(m[i][j], s, c, v, m)) return false;
        }
        c.erase(i);
        s.insert(i);
        v.push_back(i);
        return true;
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        set<int> s, c;
        vector<int> v;
        map<int, vector<int>> m;
        for(int i=0; i<prerequisites.size(); i++) m[prerequisites[i][0]].push_back(prerequisites[i][1]);
        for(int i=0; i<numCourses; i++){
            if(!dfs(i, s, c, v, m)) return {};
        }
        return v;
    }
};