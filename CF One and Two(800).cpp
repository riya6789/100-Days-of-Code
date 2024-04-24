#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int c=0;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==2)c++;
        }
        if(c==0)cout<<1<<endl;
        else if(c%2==1)cout<<-1<<endl;
        else{
            int k=1;
            c=c/2;
            for(int i=0;i<n;i++){
                if(v[i]==2){
                    c--;
                }
                if(c==0){
                    cout<<k<<endl;
                    break;
                }
                k++;
            }
        }
    }
    return 0;
}
