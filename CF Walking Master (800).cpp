#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        if(d<b) cout<<"-1"<<endl;
        else {
            ans+=(d-b);
            a+=ans;
            if(a>=c) ans+=(a-c);
            else ans=-1;
            cout<<ans<<endl;
        }
        
    }
    return 0;
}
