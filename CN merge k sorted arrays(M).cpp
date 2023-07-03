#include <bits/stdc++.h> 
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    // Write your code here. 
    priority_queue<int, vector<int>, greater<int>>p;
    vector<int>v;
    for(auto i:kArrays){
        for(auto j:i){
            p.push(j);
        }
    }
    while(!p.empty()){
        v.push_back(p.top());
        p.pop();
    }
    return v;
}
