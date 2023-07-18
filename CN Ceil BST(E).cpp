#include <bits/stdc++.h> 

int findCeil(BinaryTreeNode<int> *node, int x){
    if(node==NULL)return -1;
    if(node->data==x)return node->data;
    if(node->data<x)return findCeil(node->right,x);
    if(node->data>x){
        int n= findCeil(node->left,x);
        return (n>=x)?n:node->data;
    }
    // return node->data;
}
