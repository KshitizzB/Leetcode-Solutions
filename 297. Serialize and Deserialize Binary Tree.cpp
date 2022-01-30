class Codec {
public:
    void inorder(TreeNode* root, string &s){
        if(root){
            s += to_string(root->val) + ',';
            inorder(root->left, s);
            inorder(root->right, s);
        }
        else s += "N,";
    }
    
    TreeNode* dfs(int &i, vector<string> v){
        if(v[i]=="N"){
            i += 1;
            return NULL;
        }
        TreeNode *t = new TreeNode(stoi(v[i]));
        i += 1;
        t->left = dfs(i, v);
        t->right = dfs(i, v);
        return t;
    }
    
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        inorder(root, s);
        s.pop_back();
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        int i = 0;
        string t;
        vector<string> v;
        stringstream s(data);
        while(getline(s, t, ',')) v.push_back(t);
        return dfs(i, v);
    }
};