vector<int> search(string s, string p) {
    // Write Your Code Here
    int n=s.size();
    int m=p.size();
    vector<int> v;
    if(n==m){
        if(s==p)v.push_back(1);
        return v;
    }
    for(int i=0; i<n-m+1;i++){
        string t=s.substr(i,m);
        if(t==p)v.push_back(i+1);
    }
    return v;
}
