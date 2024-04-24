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
        int c=0;
        for(int i=0;i<n-1;i++){
            if((v[i]%2==0 && v[i+1]%2==0) || (v[i]%2==1 && v[i+1]%2==1)) c++;
        }
        cout<<c<<endl;
    }
    return 0;
}
