class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& c, int e) {
        int max=c[0];
        int n=c.size();
        vector<bool> ans;
        for(int i=1; i<n;i++){
            if(c[i]>max) max=c[i];
        }
        for(int i=0; i<n; i++){
            if(max-c[i]<=e) ans.push_back(true);
            else ans.push_back(false);
        }
        return ans;
    }
};
