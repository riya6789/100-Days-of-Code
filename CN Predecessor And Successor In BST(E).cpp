#include <bits/stdc++.h> 
void fn(BinaryTreeNode<int>* root,vector<int> &v){
    if(!root)return;
    fn(root->left,v);
    v.push_back(root->data);
    fn(root->right,v);
}
pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    pair<int,int>pair;
    if(!root)return{-1,-1};
    vector<int>v;
    fn(root,v);
    for(int i=0; i<v.size();i++){
        if(v[i]==key){
            pair.first=(i==0)?-1:v[i-1];
            pair.second=(i==v.size()-1)?-1:v[i+1];
            break;
        }
    }
    return pair;
}
