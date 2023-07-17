bool isParentSum(Node *root){
    if(!root || (!root->left && !root->right))return true;
    if(root->left)root->data-=root->left->data;
    if(root->right)root->data-=root->right->data;
    if(root->data==0)return isParentSum(root->left) && isParentSum(root->right);
    return false;
}
