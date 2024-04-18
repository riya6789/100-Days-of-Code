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
        if(!is_sorted(v.begin(),v.end())){
            cout<<"0"<<endl;
        }
        else{
        int mini=INT_MAX;
        for(int i=0;i<n-1;i++){
            mini=min(mini, v[i+1]-v[i]);
        }
        int ans=(mini/2)+1;
        cout<<ans<<endl;}
    }
    return 0;
}
