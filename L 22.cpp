class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        int open=0;
        int close=0;
        f(ans,open,close,n,"");
        return ans;
    }
    void f(vector<string> &ans, int open, int close, int n,string s){
        if(open==n && close==n){
            ans.push_back(s);
            return;
        }
        if(open<n) f(ans,open+1,close,n,s+"(");
        if(close<open) f(ans,open,close+1,n,s+")");
    }
};
