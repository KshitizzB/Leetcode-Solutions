/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(root){
            queue<TreeNode*> q;
            q.push(root);
            q.push(NULL);
            while(!q.empty()){
                vector<int> t;
                TreeNode* x = q.front();
                q.pop();
                while(x){
                    t.push_back(x->val);
                    if(x->left) q.push(x->left);
                    if(x->right) q.push(x->right);
                    x = q.front();
                    q.pop();
                }
                v.push_back(t);
                if(!q.empty()) q.push(NULL);
            }
        }
        return v;
    }
};