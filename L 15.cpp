class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        int tar=0;
        set<vector<int>> s;                            //set made to ensure only unique sets added
        vector<vector<int>> v;
        sort(a.begin(),a.end());
        for(int i=0; i<a.size(); i++){
            int j=i+1;
            int k=a.size()-1;
            while(j<k){
                int sum=a[i]+a[j]+a[k];
                if(sum==tar){
                    s.insert({a[i],a[j],a[k]});
                    j++;
                    k--;
                }
                else if(sum<tar)j++;
                else k--;
            }
        }
        
        for(auto ans:s){                                //finally need to output so uske liye need to push to vector
            v.push_back(ans);

        }
        return v;
    }
};
