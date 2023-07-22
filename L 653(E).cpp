/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void fn(TreeNode* root,vector<int> &v){
    if(!root)return;
    fn(root->left,v);
    v.push_back(root->val);
    fn(root->right,v);
    }
    bool findTarget(TreeNode* root, int k) {
        if(!root)return false;
        vector<int>v;
        fn(root,v);
        int i=0,j=v.size()-1;
        while(i<j){
            int s=v[i]+v[j];
            if(s==k)return true;
            if(s>k)j--;
            else i++;
        }
        return false;
    }
};
