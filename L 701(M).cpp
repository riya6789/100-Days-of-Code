class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int x) {
        if(root==NULL)return new TreeNode(x);
        TreeNode* c=root;
        while(c){
            if(c->val<x){
                if(c->right)c=c->right;
                else {
                    c->right=new TreeNode(x);
                    break;
                }
            }
            else{
                if(c->left)c=c->left;
                else {
                    c->left=new TreeNode(x);
                    break;
                }
            }
        }
        return root;
    }
};
