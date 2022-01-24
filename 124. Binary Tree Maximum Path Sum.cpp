class Solution {
public:
    int pathsum(TreeNode* root, int &r){
        if(root){
            int lm = max(0, pathsum(root->left, r));
            int rm = max(0, pathsum(root->right, r));
            r = max(r, root->val+lm+rm);
            return root->val+max(lm, rm);
        }
        return 0;
    }
    
    int maxPathSum(TreeNode* root) {
        int r = root->val;
        pathsum(root, r);
        return r;
    }
};