class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int n) {
        while(root!=NULL && root->val!=n){
            root=(n<root->val)?root->left:root->right;
        }
        return root;
    }
};
