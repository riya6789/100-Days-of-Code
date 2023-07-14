class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0; i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
                v.push_back(n->val);
            }
            ans.push_back(v);
        }
        return ans;
    }
};
