class Solution {
public:
    void conn(Node* root){
        if(root){
            if(root->left) root->left->next = root->right;
            if(root->right) root->right->next = root->next?root->next->left:NULL;
            conn(root->left);
            conn(root->right);
        }
    }
    
    Node* connect(Node* root) {
        if(root){
            root->next = NULL;
            conn(root);
        }
        return root;
    }
};