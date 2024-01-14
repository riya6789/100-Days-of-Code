class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& m) {
        int a=m.size();
        int b=m[0].size();
        if(a==0 || b==0)return {};
        vector<vector<int>> v(b,vector<int>(a));
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                v[j][i]=m[i][j];
            }
        }
        return v;
    }
};
