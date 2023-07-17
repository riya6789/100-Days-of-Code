class Solution {
public:
    void pre(TreeNode* root,vector<TreeNode*> &v){
        if(!root)return;
        v.push_back(root);
        pre(root->left,v);
        pre(root->right,v);
    }
    void flatten(TreeNode* root) {
        vector<TreeNode*>v;
        pre(root,v);
        for(int i=0; i<v.size();i++){
            v[i]->left=NULL;
            if(i==v.size()-1){
                v[i]->right=NULL;
            }
            else v[i]->right=v[i+1];
                        
        }
    }
};
