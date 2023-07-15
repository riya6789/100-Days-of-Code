 class Solution {
public:
    TreeNode* fn(vector<int>& nums, int l, int r){
        if(l>r)return NULL;
        int m=(l+r)/2;
        TreeNode* n=new TreeNode(nums[m]);
        n->left=fn(nums,l,m-1);
        n->right=fn(nums,m+1,r);
        return n;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return fn(nums,0,nums.size()-1);
    }
};
