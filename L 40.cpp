class Solution {
public:
    void fn(int ind, vector<int> &arr, int t, vector<vector<int>> &ans, vector<int> &v){
        if(t==0){
            ans.push_back(v);
            return;
        }
        for(int i=ind; i<arr.size();i++){
            if(i>ind && arr[i]==arr[i-1]) continue;
            if(arr[i]>t)break;
            v.push_back(arr[i]);
            fn(i+1, arr, t-arr[i],ans,v);
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int t) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> v;
        fn(0,arr,t,ans,v);
        return ans;
    }
};
