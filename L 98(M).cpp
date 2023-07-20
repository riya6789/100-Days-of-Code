class Solution {
public:
    bool fn(TreeNode* root,long min, long max){
        if(root==NULL)return true;
        if((root->val<max && root->val>min) && fn(root->left,min,root->val) && fn(root->right,root->val,max)) return true;
        else return false;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)return true;
        if(!root->left && !root->right)return true;
        return fn(root, LONG_MIN, LONG_MAX);
    }
};
