class Solution {
public:
    
    
    void helper(TreeNode* root){
        if(root==NULL) return;
        helper(root->right);
        helper(root->left);
        auto temp=root->left;
        root->left=root->right;
        root->right=temp;
        
    }
    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};
