#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool ans=false;
        for(int i:v){
            if(i==k){
                ans=true;;
                break;
            }
        }
        if(ans)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
