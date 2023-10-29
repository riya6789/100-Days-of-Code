class Solution {
public:
    void fn(TreeNode* A){
        // if(A==NULL)return;
        TreeNode* temp=A->left;
        A->left=A->right;
        A->right=temp;
        if(A->left) fn(A->left);
        if(A->right) fn(A->right);
        return;
    }
    TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return root;
        fn(root);
        return root;
    }
};

//OR

TreeNode* invertTree(TreeNode* root) {
        if(root==NULL)return NULL;
        invertTree(root->left);
        invertTree(root->right);
        TreeNode* temp=root->left;
        root->left=root->right;
        root->right=temp;
        return root;
    }
