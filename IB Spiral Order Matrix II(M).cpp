vector<vector<int> > Solution::generateMatrix(int A) {
    vector<vector<int>>v(A,vector<int>(A));
    int l=0,r=A-1,t=0,b=A-1;
    int n=1;
    while(t<=b && l<=r){
        for(int i=l;i<=r;i++){
            v[t][i]=n++;
        }
        t++;
        
        for(int i=t;i<=b;i++){
            v[i][r]=n++;
        }
        r--;
        
        if(t<=b){
            for(int i=r;i>=l;i--){
            v[b][i]=n++;
            }
            b--;
        }
        
        if(l<=r){
            for(int i=b;i>=t;i--){
            v[i][l]=n++;
            }
            l++;
        }
        
    }
    return v;
}
