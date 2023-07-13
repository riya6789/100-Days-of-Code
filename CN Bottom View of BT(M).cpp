#include <bits/stdc++.h> 
vector<int> bottomView(BinaryTreeNode<int> * root){
    vector<int>v;
    if(root==NULL)return v;
    queue<pair<BinaryTreeNode<int>*,int>>q;
    map<int,int>m;
    q.push({root,0});
    while(!q.empty()){
        auto n=q.front();
        q.pop();
        int num=n.second;
        m[num]=n.first->data;
        if(n.first->left)q.push({n.first->left,num-1});
        if(n.first->right)q.push({n.first->right,num+1});
    }
    for(auto i:m){
        v.push_back(i.second);
    }
    return v;
}
