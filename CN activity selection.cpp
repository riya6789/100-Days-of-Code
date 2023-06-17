#include <algorithm>
int maximumActivities(vector<int> &s, vector<int> &e) {
    // Write your code here.
    int n=s.size();
    vector<pair<int,int>>a(n);
    for(int i=0; i<n;i++){
        a[i].first=e[i];
        a[i].second=s[i];
    }
    sort(a.begin(), a.end());
    int c=1;
    int time=a[0].first;
    for(int i=1; i<n;i++){
        if(a[i].second>=time){
            c++;
            time=a[i].first;
        }
    }
    return c;
}
