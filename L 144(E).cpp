//Iterative

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* t=st.top();
            st.pop();
            v.push_back(t->val);
            if(t->right!=NULL)st.push(t->right);
            if(t->left!=NULL)st.push(t->left);
        }
        return v;
    }
};

//Recursive

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>v;
        if(root==NULL)return v;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            TreeNode* t=st.top();
            st.pop();
            v.push_back(t->val);
            if(t->right!=NULL)st.push(t->right);
            if(t->left!=NULL)st.push(t->left);
        }
        return v;
    }
};
