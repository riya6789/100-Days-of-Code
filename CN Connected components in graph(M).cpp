void dfs(int p, int n, vector<vector<int>>& roads, vector<int> &v){
  v[p]=1;
  for(int i=0;i<n;i++){
    if(roads[p][i] && !v[i])dfs(i,n,roads,v);
  }
}
int findNumOfStates(vector<vector<int>>& roads, int n) {
    // Write your code here.
    vector<int>v(n,0);
    int c=0;
    for(int i=0;i<n;i++){
      if(!v[i]){
        dfs(i,n,roads,v);
        c++;
      }
    }
    return c;
}
