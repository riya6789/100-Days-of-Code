#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        ans=min(ans,abs(0-a));
    }
    cout<<ans<<endl;
    return 0;
}
