/*when we encounter 0; to get row 0, i same but j range 0 to n-1; to get col 0, i range 0 to n-1 but j same
also need to store the 0 position in a seperate queue before and then do the operation
*/

class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n= mat.size();
        int m=mat[0].size();
        queue<pair<int,int>> q;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0)q.push({i,j});
            }
        }
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int k=0; k<n;k++){
                mat[k][c]=0;
            }
            for(int k=0; k<m; k++){
                mat[r][k]=0;
            }
        }


    }
};
