class Solution {
public:
    bool fn(int start,vector<vector<int>>& adj, vector<int> &v){
        queue<int>q;
        q.push(start);
        v[start]=0;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            for(auto it:adj[t]){
                if(v[it]==-1){
                    v[it]=!v[t];
                    q.push(it);
                }
                else if(v[it]==v[t])return false;
            }
        }
        return true;
    }
    bool isBipartite(vector<vector<int>>& adj) {
        int n=adj.size();
        vector<int>v(n,-1);
        for(int i=0; i<n;i++){
            if(v[i]==-1){
                if(fn(i,adj,v)==false)return false;
            }
        }
        return true;
    }
};
