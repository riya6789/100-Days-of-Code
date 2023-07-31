#include <bits/stdc++.h> 
int fn(vector<int> &dp, int n, vector<int> &a){
    if(n==0)return 0;
    if(dp[n]!=-1)return dp[n];
    int r=INT_MAX;
    int l=fn(dp,n-1,a)+abs(a[n]-a[n-1]);
    if(n>1)r=fn(dp,n-2,a)+abs(a[n]-a[n-2]);
    return dp[n]=min(l,r);
}
int frogJump(int n, vector<int> &a)
{
    vector<int>dp(n+1,-1);
    return fn(dp,n-1,a);
}
