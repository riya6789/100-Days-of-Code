#include <bits/stdc++.h>
using namespace std;

class Solution {
   private:
    bool checkForCycle(int s, int V, vector<int> adj[], vector<int>& visited) {
        vector<int> parent(V, -1);

        queue<pair<int, int>> q;

        visited[s] = true;
        q.push({s, -1});

        while (!q.empty()) {
            int node = q.front().first;
            int par = q.front().second;
            q.pop();

            for (auto it : adj[node]) {
                if (!visited[it]) {
                    visited[it] = true;
                    q.push({it, node});
                } else if (par != it)
                    return true;
            }
        }
        return false;
    }

   public:
    bool detectCycle(int V, vector<int> adj[]) {
        vector<int> vis(V, 0);
        for (int i = 0; i < V; i++) {
            if (!vis[i])
                if (checkForCycle(i, V, adj, vis)) return true;
        }

        return false;
    }
};

int main() {
    int V, E;
    cin >> V >> E;
    vector<int> adj[V];
    for (int i = 0; i < E; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
    if (obj.detectCycle(V, adj))
        cout << "True" << endl;
    else
        cout << "False" << endl;
    return 0;
}
