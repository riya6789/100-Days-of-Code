
class Solution {
public:
    void findSum(TreeNode* root, int &sum,int temp){
    if(!root)return;
    temp=temp*10 + root->val;
    if(!root->left && !root->right){
        sum+=temp;
    }
    
    findSum(root->left,sum,temp);
    findSum(root->right,sum,temp);
}

    int sumNumbers(TreeNode* A) {
    int sum=0;
    int temp=0;
    findSum(A,sum,temp);
    return sum;
    }
};

