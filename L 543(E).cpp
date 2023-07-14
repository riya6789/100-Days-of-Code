class Solution {
public:
    int h(TreeNode* root, int &d){
        if(!root)return 0;
        int l=h(root->left,d);
        int r=h(root->right,d);
        d=max(d,l+r);
        return 1+max(l,r);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int d=0;
        h(root,d);
        return d;
    }
};
