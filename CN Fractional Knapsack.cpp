#include <bits/stdc++.h> 
bool comp(pair<int,int>& a,pair<int,int>& b){
    double r1=(double)a.second/a.first;
    double r2=(double)b.second/b.first;
    return r1>r2;
}
double maximumValue (vector<pair<int, int>>& a, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.
    int s=a.size();
    double ans=0.00;
    int curr=0;
    sort(a.begin(),a.end(),comp);
    for(int i=0; i<s;i++){
        if(curr+a[i].first<=w){
            curr+=a[i].first;
            ans+=a[i].second;
        }
        else{
            int rem=w-curr;
            ans+=a[i].second*((double)rem/a[i].first);
            break;
        }
    }
    return ans;

}
