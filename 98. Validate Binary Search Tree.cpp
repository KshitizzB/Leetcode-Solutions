class Solution {
public:
    bool valid(TreeNode* root, long l, long r){
        if(root){
            if(root->val<=l || root->val>=r) return false;
            return valid(root->left, l, root->val) && valid(root->right, root->val, r);
        }
        return true;
    }
    
    bool isValidBST(TreeNode* root) {
        return valid(root, LONG_MIN, LONG_MAX);
    }
};