class Solution {
public:
    int findMin(vector<int>& a) {
        int l=0;
        int n=a.size();
        int h=n-1;
        int ans=INT_MAX;
        while(h>=l){
            int m=(l+h)/2;
            if(a[l]<=a[h]){
                ans=min(ans,a[l]);
                break;
            }
            if(a[m]<=a[h]){
                ans=min(ans,a[m]);
                h=m-1;
            }
            else{
                ans=min(ans,a[l]);
                l=m+1;
            }
        } 
        return ans;
    }
};
