class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n1=a.size();
        int n2=b.size();
        int n=n1+n2;
        if(n1>n2) return findMedianSortedArrays(b,a);
        int p=(n+1)/2;
        int l=0, h=n1;
        while(l<=h){
            int c1=(l+h)/2;
            int c2=p-c1;
            int l1=(c1==0)?INT_MIN:a[c1-1];
            int l2=(c2==0)?INT_MIN:b[c2-1];
            int r1=(c1==n1)?INT_MAX:a[c1];
            int r2=(c2==n2)?INT_MAX:b[c2];
            if(l1<=r2 && l2<=r1){
                if(n%2==0)return (max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }
            else if(l1>r2)h=c1-1;
            else l=c1+1;
        }
        return 0.0;
    }
};
