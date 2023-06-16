#include <bits/stdc++.h> 
struct meet{
    int start; 
    int end;
    int id;
};
bool comp(struct meet a, struct meet b){
    if(a.end==b.end)return a.id<b.id;
    else return a.end<b.end;
}
vector<int> maximumMeetings(vector<int> &s, vector<int> &e) {
    int n=s.size();
    struct meet meet[n];
    for(int i=0; i<s.size(); i++){
        meet[i].id=i+1;
        meet[i].start=s[i];
        meet[i].end=e[i];
    }
    sort(meet, meet+n, comp);
    vector<int> v;
    v.push_back(meet[0].id);
    int t=meet[0].end;
    for(int i=0; i<s.size();i++){
        if(meet[i].start>t){
            v.push_back(meet[i].id);
            t=meet[i].end;
        }
    }
    return v;
}
