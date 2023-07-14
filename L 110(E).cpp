class Solution {
public:
    int h(TreeNode* root, int &n){
        if(!root)return 0;
        int l=h(root->left,n);
        int r=h(root->right,n);
        if(l==-1 || r==-1){n=-1;return n;}
        if(abs(l-r)>1){n=-1;return n;}
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        int n=0;
        h(root, n);
        if(n==-1)return false;
        else return true;
    }
};
