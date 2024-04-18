#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c1=0,c2=0;
        for(int i=0;i<n;i++){
            int a;
            cin>>a;
            if(a==1)c1++;
            else c2++;
        }
        if(c1>=c2){
            if(c2%2==1) cout<<"1"<<endl;
            else cout<<"0"<<endl;
        }
        else{
            int op=c2-(n/2);
            if((n/2)%2==1) cout<<op+1<<endl;
            else cout<<op<<endl;
        }
    }
    return 0;
}
