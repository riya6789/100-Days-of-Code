class Solution {
public:
    int maxScore(vector<int>& n, int k) {
        int total=0;
        int s=n.size();
        for(int i=0; i<s;i++){                //total mein se we subtract a subarray with minimum sum
            total+=n[i];  
        }
        int minn=0;                           //using window sliding method, find minimum subarray of length n.size()-k
        for(int i=0; i<s-k; i++){
            minn+=n[i];
        }
        int sum=minn;                                 
        for(int i=s-k; i<s; i++){
            sum+=n[i]-n[i-s+k];
            minn=min(minn,sum);
        }
        return total-minn;
    }
};
