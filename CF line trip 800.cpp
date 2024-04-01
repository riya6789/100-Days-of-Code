#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> v(n+1);
        v[0] = 0;
        for(int i = 1; i < n+1; i++){
            cin >> v[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            ans = max(ans, v[i+1] - v[i]);
        }
        ans = max(ans, 2*(x - v[n]));
        cout << ans <<endl;
    }
    
    return 0;
}
