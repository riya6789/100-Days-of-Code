class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& a) {
        vector<vector<int>>adj(n);
        for(auto it:a){
            adj[it[0]].push_back(it[1]);
        }
        vector<int>in(n,0);
        for(int i=0;i<n;i++){
            for(auto it:adj[i])in[it]++;
        }
        queue<int>q;
        for(int i=0;i<n;i++){
            if(in[i]==0)q.push(i);
        }
        vector<int>ans;
        while(!q.empty()){
            int t=q.front();
            q.pop();
            ans.push_back(t);
            for(auto it:adj[t]){
                in[it]--;
                if(in[it]==0)q.push(it);
            }
        }
        if(ans.size()==n)return true;
        return false;
    }
};
