//Recursive
class Solution {
public:
    bool fn(TreeNode* n1, TreeNode* n2){
        if(!n1 && !n2)return true;
        if(!n1 || !n2)return false;
        return n1->val==n2->val && fn(n1->left,n2->right) && fn(n1->right, n2->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;
        return fn(root->left, root->right);
    }
};

//Iterative
class Solution {
public:
    bool isp(vector<int> &v){
        int i=0,j=v.size()-1;
        while(i<=j){
            if(v[i]!=v[j])return false;
            i++;
            j--;
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if(!root)return false;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int s=q.size();
            vector<int>v;
            for(int i=0; i<s;i++){
                TreeNode* n=q.front();
                q.pop();
                TreeNode* temp=new TreeNode(0);
                if(n->left){
                    q.push(n->left);
                    v.push_back(n->left->val);
                }
                else v.push_back(INT_MAX);
                
                if(n->right){
                    q.push(n->right);
                    v.push_back(n->right->val);
                }
                else v.push_back(INT_MAX);
            }
            if(!isp(v))return false;
        }
        return true;
    }
};
