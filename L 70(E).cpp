class Solution {
public:
    int climbStairs(int n) {
        if(n==0 || n==1)return 1;
        int p=1;
        int p2=1;
        int c=0;
        for(int i=2;i<=n;i++){
            c=p+p2;
            p2=p;
            p=c;
        }
        return c;
    }
};
