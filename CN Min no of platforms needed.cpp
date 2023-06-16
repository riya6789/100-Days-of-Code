int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at, at+n);
    sort(dt, dt+n);
    int ans=1;
    int i=1; int j=0;
    int c=1;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            c++;
            i++;
        }
        else{
            c--;
            j++;
        }
        ans=max(c,ans);
    }
    return ans;
}
