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
        bool f=true;
        int e=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.') e++;
            if(i>0 && i<n-1){
                if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.') {cout<<2<<endl;
                f=false;
                break;}
            }
        }
        if(f) cout<<e<<endl;
    }
    return 0;
}
