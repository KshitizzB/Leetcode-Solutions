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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.empty() || inorder.empty()) return NULL;
        TreeNode* root = new TreeNode(preorder[0]);
        int m = find(inorder.begin(), inorder.end(), preorder[0]) - inorder.begin();
        vector<int> p, q, r, s;
        for(int i=1; i<=m; i++) p.push_back(preorder[i]);
        for(int i=0; i<m; i++) q.push_back(inorder[i]);
        for(int i=m+1; i<preorder.size(); i++) r.push_back(preorder[i]);
        for(int i=m+1; i<inorder.size(); i++) s.push_back(inorder[i]);
        root->left = buildTree(p, q);
        root->right = buildTree(r, s);
        return root;
    }
};