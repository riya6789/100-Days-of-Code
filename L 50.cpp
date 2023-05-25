class Solution {
public:
    double myPow(double x, int n) {
        if(x==2 && n==INT_MIN) return 0;
        int p=abs(n);
        double ans=1.0;
        while(p>0){
            if(p%2==0){
                x=x*x;
                p=p/2;
            }
            else{
                ans=ans*x;
                p--;
            }
        }
        if(n<0) ans=1/ans;
        return ans;
    }
};
