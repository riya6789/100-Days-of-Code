class Solution {
public:
    void fn(int idx,vector<vector<string>> &ans, vector<string> &v, string s){
        if(idx==s.size()){
            ans.push_back(v);
            return;
        }
        for(int i=idx; i<s.size();i++){
            if(isp(s,idx,i)==true){
                v.push_back(s.substr(idx,i-idx+1));
                fn(i+1, ans,v,s);
                v.pop_back();
            }
        }
    }
    bool isp(string s, int start, int end){
        while(start<=end){
            if(s[start]!=s[end])return false;
            start++;
            end--;
        }
        return true;
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> v;
        fn(0, ans, v,s);
        return ans;
    }
};
