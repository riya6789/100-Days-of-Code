#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        
        bool f=false;
        for(int i=0;i<=5;i++){
            if(x.find(s)!=string::npos){
                cout<<i<<endl;
                f=true;
                break;
            }
            x.append(x);
        }
        if(!f)cout<<-1<<endl;
    }
    return 0;
}
