class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root){
            if(p==root || q==root) return root;
            TreeNode* l = lowestCommonAncestor(root->left, p, q);
            TreeNode* r = lowestCommonAncestor(root->right, p, q);
            if(l && r) return root;
            return l?l:r;
        }
        return NULL;
    }
};