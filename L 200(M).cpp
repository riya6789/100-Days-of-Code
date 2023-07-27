class Solution {
public:
    void dfs(int r,int c,vector<vector<int>>&v,vector<vector<char>>& a,int delr[],int delc[]){
        v[r][c]=1;
        int n=a.size();
        int m=a[0].size();
        for(int i=0;i<4;i++){
            int nr=r+delr[i];
            int nc=c+delc[i];
            if(nr>=0 && nc>=0 && nr<n && nc<m && !v[nr][nc] && a[nr][nc]=='1'){
                dfs(nr,nc,v,a,delr,delc);
            }
        }
    }
    int numIslands(vector<vector<char>>& a) {
        int n=a.size();
        int m=a[0].size();
        vector<vector<int>>v(n,vector<int>(m,0));
        int ans=0;
        int delr[]={-1,0,1,0};
        int delc[]={0,1,0,-1};
        for(int i=0; i<n;i++){
            for(int j=0;j<m;j++){
                if(!v[i][j] && a[i][j]=='1'){
                    dfs(i,j,v,a,delr,delc);
                    ans++;
                }
            }
        }
        return ans;
    }
};
