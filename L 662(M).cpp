class Solution {
public:
    int widthOfBinaryTree(TreeNode* root) {
        int w=1;
        if(root==NULL)return 0;
        queue<pair<TreeNode*,long long>>q;
        q.push({root,1});
        int l,r;
        while(!q.empty()){
            int s=q.size();
            int l=q.front().second;
            int r=q.back().second;
            w=max(w,r-l+1);
            for(int i=0; i<s;i++){
                auto t=q.front();
                q.pop();
                TreeNode* node=t.first;
                long long n=t.second-l;
                if(node->left)q.push({node->left,2*n});
                if(node->right)q.push({node->right,2*n+1});
            }
        }

        return w;
    }
};
