#include <bits/stdc++.h> 
vector<int> getTopView(TreeNode<int> *root) {
    vector<int>v;
    if(root==NULL)return v;
    queue<pair<TreeNode<int>*,int>>s;
    map<int,int>m;
    s.push({root,0});
    while(!s.empty()){
        auto n=s.front();
        s.pop();
        int num=n.second;
        if(m.find(n.second)==m.end())m[n.second]=n.first->val;
        if(n.first->left)s.push({n.first->left,num-1});
        if(n.first->right)s.push({n.first->right,num+1});
    }
    for(auto i:m){
        v.push_back(i.second);
    }
    return v;
}
