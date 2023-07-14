#include <bits/stdc++.h>
void dfs(BinaryTreeNode < int > * root,vector<string> &s,string c){
    if(root==NULL)return;
    c+=to_string(root->data)+" ";
    if(!root->left && !root->right){s.push_back(c); return;}
    if(root->left)dfs(root->left,s,c);
    if(root->right)dfs(root->right,s,c);
    
} 
vector < string > allRootToLeaf(BinaryTreeNode < int > * root) {
    vector<string>s;
    dfs(root,s,"");
    return s;
}
