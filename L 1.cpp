class Solution {
public:
    vector<int> twoSum(vector<int>& n, int t) {
        int s=n.size();
        int diff=0;
        vector<int> ans;
        for(int i=0; i<s;i++){
            diff=t-n[i];
            for(int j=i+1; j<s; j++){
                if(n[j]==diff) {
                    ans.push_back(i);            //not do ans[0]=i;
                    ans.push_back(j);
                };
            }
        }
        return ans;
    }
};
