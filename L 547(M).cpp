class Solution {
public:
    void dfs(int p, int n, vector<vector<int>>& a, vector<int> &v){
        v[p]=1;
        for(int i=0;i<n;i++){
            if(a[p][i]==1 && !v[i])dfs(i,n,a,v);
        }
    }
    int findCircleNum(vector<vector<int>>& a) {
        int n=a.size();
        int c=0;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            if(!v[i]){
                dfs(i,n,a,v);
                c++;
            }
        }
        return c;
    }
};
