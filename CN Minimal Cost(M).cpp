int minimizeCost(int n, int k, vector<int> &a){
    // Write your code here.
    vector<int>dp(n,-1);
    dp[0]=0;
    
    for(int i=1;i<n;i++){
        dp[i]=INT_MAX;
        for(int j=1;j<=k;j++){
            if(i-j>=0)dp[i]=min(dp[i],dp[i-j]+abs(a[i]-a[i-j]));   
        }        
    }
    return dp[n-1];
}
