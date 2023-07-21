class Solution {
public: 
    Node* connect(Node* root) {
        if(!root || !root->left)return root;
        root->left->next=root->right;
        root->right->next=root->next? root->next->left:NULL;
        root->left=connect(root->left);
        root->right=connect(root->right);
        return root;
    }
};
