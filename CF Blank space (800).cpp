#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        int c=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==0)c++;
            else{
                ans=max(ans,c);
                c=0;
            }
        }
        cout<<max(ans,c)<<endl;
    }
    return 0;
}
