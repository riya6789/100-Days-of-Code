#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            int b=n+1-a;
            cout<<b<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
