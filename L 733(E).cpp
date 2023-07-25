class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& grid, int sr, int sc, int color) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>>q;
        vector<vector<int>>ans(n, vector<int>(m));
        vector<vector<bool>>v(n, vector<bool>(m, false));
        ans[sr][sc]=color;
        q.push({sr,sc});
        v[sr][sc]=true;
        int num=grid[sr][sc];
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nr=r+dx[i];
                int nc=c+dy[i];
                if(nr>=0 && nr<n && nc>=0 && nc<m && grid[nr][nc]==num && !v[nr][nc]){
                    q.push({nr,nc});
                    ans[nr][nc]=color;
                    v[nr][nc]=true;
                }
            }
        }
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(!ans[i][j])ans[i][j]=grid[i][j];
            }
        }
        return ans;
    }
};
