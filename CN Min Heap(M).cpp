#include <bits/stdc++.h> 
vector<int> minHeap(int n, vector<vector<int>>& q) {
    // Write your code here.
    vector<int> ans;
    priority_queue<int, vector<int>, greater<int>> p;
    int i=0;
    while(i<n){
        if(q[i][0]==0)p.push(q[i][1]);
        else{
            ans.push_back(p.top());
            p.pop();
        }        

        i++;
    }
    return ans;
}
