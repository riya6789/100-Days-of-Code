int Solution::maximumGap(const vector<int> &A) {
    int n=A.size();
    if(n==1)return 0;
    int ans=0;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++) v.push_back({A[i],i});
    sort(v.begin(),v.end());
    int mi=INT_MAX;
    for(int i=0;i<n;i++){
        mi=min(v[i].second,mi);
        ans=max(ans,v[i].second-mi);
    }
    
    return ans;
}
