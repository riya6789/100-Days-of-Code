class Solution {
public:
    void merge(vector<int>& a, int m, vector<int>& b, int n) {
        int i=m-1;
        int j=n-1;
        int k=m+n-1;
        while(j>=0){
            if(i>=0 && a[i]>b[j]){
                a[k]=a[i];
                i--;
            }
            else{
                a[k]=b[j];
                j--;
            }
            k--;
        }
        
    }
};
