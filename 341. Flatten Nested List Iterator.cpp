class NestedIterator {
public:
    int i=0;
    vector<int>v;
    
    void dfs(vector<NestedInteger>nestedList){
        for(int i=0; i<nestedList.size(); i++){
            if(nestedList[i].isInteger()) v.push_back(nestedList[i].getInteger());
            else dfs(nestedList[i].getList());
        }
    }
    
    NestedIterator(vector<NestedInteger> &nestedList) {
        v.clear();
        dfs(nestedList);
    }
    
    int next() {
        return i<v.size()?v[i++]:-1;
    }
    
    bool hasNext() {
        return i<v.size();
    }
};