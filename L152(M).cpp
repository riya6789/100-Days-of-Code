class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        int p=1,s=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(p==0)p=1;
            p*=a[i];
            ans=max(ans,p);
        }
        for(int i=n-1;i>=0;i--){
            if(s==0)s=1;
            s*=a[i];
            ans=max(ans,s);
        }
        return ans;
    }
};

//SHORTER

class Solution {
public:
    int maxProduct(vector<int>& a) {
        int n=a.size();
        int p=1,s=1;
        int ans=INT_MIN;
        for(int i=0;i<n;i++){
            if(p==0)p=1;
            if(s==0)s=1;
            s*=a[n-i-1];
            p*=a[i];
            ans=max(ans,max(s,p));
        }
        return ans;
    }
};
