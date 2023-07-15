class Solution {
public:
    int fn(TreeNode* root, int &s){
        if(!root)return 0;
        int l=max(0,fn(root->left,s));
        int r=max(0,fn(root->right,s));
        s=max(s,root->val+l+r);
        return max(l,r)+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int s=INT_MIN;
        fn(root,s);
        return s;
    }
};
