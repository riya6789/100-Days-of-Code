class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()){
            int s=q.size();
            vector<int> v(s);
            for(int i=0;i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                int j=(flag)?i:s-i-1;
                v[j]=n->val;
                if(n->left)q.push(n->left);
                if(n->right)q.push(n->right);
            }
            flag=!flag;
            ans.push_back(v);
        }
        return ans;
    }
};
