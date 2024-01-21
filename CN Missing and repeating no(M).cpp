vector<int> findMissingRepeatingNumbers(vector < int > a) {
    long long n=a.size();
    long long s=0, s2=0;
    long long sn=n * (n+1) / 2;
    long long s2n=n * (n+1) *(2*n+1) / 6;
    for(int i:a){
        s+=i;
        s2+=(long)i*(long)i;
    }
    long long v1=s-sn;
    long long v2=s2-s2n;
    v2=v2/v1;
    long long x=(v1+v2)/2;
    long long y=x-v1;
    return { (int)x, (int)y };
}
