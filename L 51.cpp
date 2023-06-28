class Solution {
public:
    void fn(vector<vector<string>> &ans,vector<string> &board,int c,vector<int> &row, vector<int> &up, vector<int> &down, int n){
        if(c==n){
            ans.push_back(board);
            return;
        }
        for(int r=0; r<n; r++){
            if(row[r]==0 && up[n-1+c-r]==0 && down[c+r]==0){
                board[r][c]='Q';
                row[r]=1;
                up[n-1+c-r]=1;
                down[c+r]=1;
                fn(ans,board,c+1,row,up,down,n);
                board[r][c]='.';
                row[r]=0;
                up[n-1+c-r]=0;
                down[c+r]=0;
                
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0; i<n; i++){
            board[i]=s;
        }
        vector<int> row(n), up(2*n-1,0), down(2*n-1);
        fn(ans, board, 0, row, up, down, n);
        return ans;
    }
};
