//Easier-dont need map
#include <bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &b, int n)
{
    // Write your code here.
        stack<int>s;
        vector<int>v(n,-1);
        s.push(b[n-1]);
        for(int i=n-2; i>=0; i--){
            while(!s.empty() && s.top()>=b[i]) s.pop();
            if(!s.empty())v[i]=s.top();
            s.push(b[i]);
        }
        return v;    
}

//OR
#include <bits/stdc++.h>
vector<int> nextSmallerElement(vector<int> &b, int n)
{
    // Write your code here.
        stack<int>s;
        vector<int>v;
        unordered_map<int,int>m;
        m[n-1]=-1;
        s.push(b[n-1]);
        for(int i=n-2; i>=0; i--){
            while(!s.empty() && s.top()>=b[i]) s.pop();
            m[i]=s.empty()?-1:s.top();
            s.push(b[i]);
        }
        for(int j=0;j<n;j++){
            v.push_back(m[j]);
        }
        return v;
    
}
