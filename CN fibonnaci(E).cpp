#include<bits/stdc++.h>
using namespace std;
int dp(int n, vector<int> &v){
        if(n<=1)return n;
        if(v[n]!=-1)return v[n];
        return v[n]=dp(n-1,v)+dp(n-2,v);
}
int main()
{
        int n;
        cin>>n;
        vector<int>v(n+1,-1);
        cout<<dp(n,v)<<endl;
}
