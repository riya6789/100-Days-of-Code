class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int i=0;
        int j=m[i].size()-1;
        while(i<m.size() && j>=0){
            if(m[i][j]==t){
                return true;
            }
            else if(m[i][j]>t){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};
