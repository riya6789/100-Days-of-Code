int NthRoot(int n, int m) {
  // Write your code here.
  int ans=-1;
  int l=1,h=m;
  while(l<=h){
    int mid=(l+h)/2;
    long long x=1;
    for(int i=1;i<=n;i++){
      x*=mid;
      if(x>m)break;
    }
    if(x==m)return mid;
    else if(x<m)l=mid+1;
    else h=mid-1;
  }
  return -1;
}
