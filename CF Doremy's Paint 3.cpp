#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        
        unordered_map<int,int>m;
        bool ans=true;
        for(int i=0;i<n;i++){
            m[v[i]]++;
        }
        if(m.size()>2){
                ans=false;
            }
        
        else if(m.size()==2){
            int f1 = m.begin()->second;
            int f2 = next(m.begin())->second;
            
            if(abs(f1 - f2) > 1){
                ans=false;
            }
        }
        
        if(ans) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
