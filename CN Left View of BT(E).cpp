#include <bits/stdc++.h> 
/************************************************************

    Following is the TreeNode class structure

    template <typename T>
    class TreeNode {
       public:
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this->data = data;
            left = NULL;
            right = NULL;
        }
    };

************************************************************/

vector<int> getLeftView(TreeNode<int> *root)
{
    vector<int>v;
    if(root==NULL)return v;
    queue<TreeNode<int>*>q;
    q.push(root);
    int n;
    while(!q.empty()){
        int s=q.size();
        for(int i=0; i<s;i++){
            TreeNode<int> *curr=q.front();
            q.pop();
            if(i==0)n=curr->data;
            if(curr->left!=NULL)q.push(curr->left);
            if(curr->right!=NULL)q.push(curr->right);
        }
        v.push_back(n);
    }
    
    return v;

}
