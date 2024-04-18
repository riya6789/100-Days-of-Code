#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;
        if(x==1){
            if(k==1)cout<<"NO"<<endl;
            else if(n%k==0){
                cout<<"YES"<<endl;
                int p=n/k;
                cout<<p<<endl;
                for(int i=0;i<p;i++) cout<<k<<" ";
                cout<<"\n";
            }
            else cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<n<<endl;
            for(int i=0;i<n;i++) cout<<"1"<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
