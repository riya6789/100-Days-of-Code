class Solution {
public:
    void dfs(int r,int c,vector<vector<int>> &v,vector<vector<char>>& a,int delr[],int delc[]){
        v[r][c]=1;
        int n=a.size();
        int m=a[0].size();
        for(int i=0;i<4;i++){
            int nr=r+delr[i];
            int nc=c+delc[i];
            if(nr>=0 && nc>=0 && nr<n && nc<m && !v[nr][nc] && a[nr][nc]=='O'){
                dfs(nr,nc,v,a,delr,delc);
            }
        }
    }
    void solve(vector<vector<char>>& a) {
        int n=a.size();
        int m=a[0].size();
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        vector<vector<int>>v(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            if(!v[i][0] && a[i][0]=='O')dfs(i,0,v,a,delr,delc);
            if(!v[i][m-1] && a[i][m-1]=='O')dfs(i,m-1,v,a,delr,delc);
        }
        for(int j=0;j<m;j++){
            if(!v[0][j] && a[0][j]=='O')dfs(0,j,v,a,delr,delc);
            if(!v[n-1][j] && a[n-1][j]=='O')dfs(n-1,j,v,a,delr,delc);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && a[i][j]=='O')a[i][j]='X';
            }
        }
    }
};
