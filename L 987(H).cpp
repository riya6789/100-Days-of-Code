class Solution {
public:
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<pair<TreeNode*,pair<int,int>>>q;
        map<int,map<int,multiset<int>>>m;
        q.push({root,{0,0}});
        while(!q.empty()){
            auto n=q.front();
            q.pop();
            TreeNode* node=n.first;
            int v=n.second.first;
            int h=n.second.second;
            m[v][h].insert(node->val);

            if(node->left)q.push({node->left,{v-1,h+1}});
            if(node->right)q.push({node->right,{v+1,h+1}});
        }
        for(auto i:m){
            vector<int>col;
            for(auto j:i.second){
                col.insert(col.end(),j.second.begin(),j.second.end());
            }
            ans.push_back(col);
        }
        return ans;
    }
};
