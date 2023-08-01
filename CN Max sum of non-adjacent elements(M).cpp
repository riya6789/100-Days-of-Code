#include <bits/stdc++.h> 
int fn(int i, vector<int> &a, vector<int> &dp){
    if(i==0)return a[i];
    if(i<0)return 0;
    if(dp[i]!=-1)return dp[i];
    int l=a[i]+fn(i-2,a,dp);
    int r=0+fn(i-1,a,dp);
    return dp[i]=max(l,r);
}
int maximumNonAdjacentSum(vector<int> &a){
    int n=a.size();
    vector<int>dp(n,-1);
    return fn(n-1,a,dp);
}
