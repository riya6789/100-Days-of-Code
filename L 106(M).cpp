class Solution {
public:
    TreeNode* fn(vector<int>& i,int istart,int iend,vector<int>& p,int pstart,int pend,unordered_map<int,int> &m){
        if (pstart > pend || istart > iend) return NULL;
        TreeNode* n=new TreeNode (p[pend]);
        int iroot=m[n->val];
        int nums=iroot-istart;

        n->left=fn(i,istart,iroot-1,p,pstart,pstart+nums-1,m);
        n->right=fn(i,iroot+1,iend,p,pstart+nums,pend-1,m);
        return n;
    }
    TreeNode* buildTree(vector<int>& i, vector<int>& p) {
        unordered_map<int,int> m;
        for(int j=0; j<i.size();j++){
            m[i[j]]=j;
        }
        TreeNode* root=fn(i,0,i.size()-1,p,0,p.size()-1,m);
        return root;
    }
};
