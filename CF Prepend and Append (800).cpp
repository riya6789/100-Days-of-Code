#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int a=0,b=n-1;
        int ans=n;
        while(s[a]!=s[b] && ans>0){
                ans-=2;
                a++;
                b--;
        }
        cout<<ans<<endl;
    }
    return 0;
}
