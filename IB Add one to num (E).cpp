vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    
    A[n-1]++;
    for(int i=n-1;i>0;i--){
        if(A[i]==10){
            A[i]=0;
            A[i-1]++;
        }
    }    
    if(A[0]==10){
        A[0]=0;
        A.insert(A.begin(),1);
    }
    int i=0;
    while(A[0]==0 && i<n-1){
        A.erase(A.begin());
        i++;
    }
    
    return A;
}
