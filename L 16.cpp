class Solution {
public:
    int threeSumClosest(vector<int>& n, int t) {
        sort(n.begin(), n.end());
        if(n.size()==3)return (n[0]+n[1]+n[2]);
        int diff=INT_MAX;
        int ans=0;
        for(int i=0; i<n.size()-2; i++){
            int j=i+1;
            int k=n.size()-1;
            while(j<k){
                int sum=n[i]+n[j]+n[k];
                if(sum==t)return sum;
                else if(abs(sum-t)<diff){
                    diff=abs(sum-t);
                    ans=sum;
                }

                if(sum<t)j++;
                else k--;
                
            }
            
        }
        return ans;
    }
};
