
class Solution {
public:
    vector<vector<int> > fn(TreeNode* A, int B, vector<vector<int>> &ans, vector<int>&v){
    
    B-=A->val;
    v.push_back(A->val);
    if(!A->left && !A->right){
        if(B==0){
            ans.push_back(v);
        }
    }
    if(A->left)fn(A->left,B,ans,v);
    if(A->right)fn(A->right,B,ans,v);
    v.pop_back();
    return ans;
}
    vector<vector<int>> pathSum(TreeNode* A, int B) {
    vector<vector<int>>ans;
    if(!A)return ans;
    vector<int>v;
    return fn(A,B,ans,v);
    }
};
