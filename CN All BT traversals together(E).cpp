#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure:

    class BinaryTreeNode
    {
    public :
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };


************************************************************/

vector<vector<int>> getTreeTraversal(BinaryTreeNode<int> *root){
    // Write your code here.
    vector<vector<int>>v(3);
    stack<pair<BinaryTreeNode<int>*,int>>s;
    if(root==NULL)return v;
    s.push({root,1});
    while(!s.empty()){
        auto n=s.top();
        s.pop();
        if(n.second==1){
            v[1].push_back(n.first->data);
            n.second++;
            s.push(n);
            if(n.first->left!=NULL){
                s.push({n.first->left,1});
            }
        }
        else if(n.second==2){
            v[0].push_back(n.first->data);
            n.second++;
            s.push(n);
            if(n.first->right!=NULL){
                s.push({n.first->right,1});
            }
        }
        else{
            v[2].push_back(n.first->data);
        }
    }
    return v;
}
