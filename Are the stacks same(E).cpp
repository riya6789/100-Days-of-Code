#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int>s1;
    stack<int>s2;
    int n,m;
    cin>>n>>m;
    int t1=n, t2=m;
    while(t1--){
        int t;
        cin>>t;
        s1.push(t);
    }
    while(t2--){
        int t;
        cin>>t;
        s2.push(t);
    }
    
    if(n!=m)cout<<"NO";
    else{
        while(!s1.empty()){
            if(s1.top()!=s2.top()){
                cout<<"NO";
                return 0;
            }
            else{
                s1.pop();
                s2.pop();
            }
        }
        cout<<"YES";
    }
    
    return 0;
}
