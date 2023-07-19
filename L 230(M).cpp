class Solution {
public:
    int c=0;
    void fn(TreeNode* root, int &k, int &ans){
        if(root==NULL)return;
        fn(root->left,k,ans);
        c++;
        if(c==k)ans=root->val;
        fn(root->right,k,ans);
    }
    int kthSmallest(TreeNode* root, int k) {
        int ans;
        fn(root,k,ans);
        return ans;
    }
};
