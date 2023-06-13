class Solution {
public:
    int trap(vector<int>& a) {
        int l=0; int r=a.size()-1;
        int ml=0; int mr=0;
        int ans=0;
        while(l<=r){
            if(a[l]<=a[r]){
                if(a[l]>ml)ml=a[l];
                else ans+=ml-a[l];
                l++;
            }
            else{
                if(a[r]>mr)mr=a[r];
                else ans+=mr-a[r];
                r--;
            }
        }
        return ans;
    }
};
