#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        else{
            cout<<"2"<<endl;
            int n1=k-1;
            int n2=x-n1;
            cout<<n1<<" "<<n2<<endl;
        }
    }
    return 0;
}
