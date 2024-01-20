int Solution::solve(vector<int> &A, int B) {
    int x=0;
    unordered_map<int,int>m;
    m[x]++;
    int ans=0;
    for(int i=0;i<A.size();i++){
        x=x^A[i];
        int t=x^B;
        if(m.find(t)!=m.end())ans+=m[t];
        m[x]++;
    }
    return ans;
}
