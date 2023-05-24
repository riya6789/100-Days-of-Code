class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& a) {
        sort(a.begin(), a.end());
        vector<vector<int>> v;
        int n=a.size();
        v.push_back(a[0]);
        int j=0;
        for(int i=1; i<n;i++){
            if(a[i][0]<=v[j][1]){
                v[j][1]=max(a[i][1],v[j][1]);
            }
            else{
                v.push_back(a[i]);
                j++;
            }
            
        }
        return v;
    }
};
