#include <bits/stdc++.h> 
void fn(int i, int sum, vector<int> &v, int n,vector<int> &num){
    if(i==n){
        v.push_back(sum);
        return;
    }
    fn(i+1,sum+num[i],v,n,num);
    fn(i+1,sum,v,n,num);
}
vector<int> subsetSum(vector<int> &num){
    vector<int> v;
    int n=num.size();
    fn(0,0,v,n,num);
    sort(v.begin(),v.end());
    return v;
}
