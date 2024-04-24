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
        bool b=false;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(v[i],v[j])<=2) {b=true; break;}
            }
        }
        if(b) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
    return 0;
}
