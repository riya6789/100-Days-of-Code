/*BRUTE
inside one loop only, update min value and update final max profit by seeing if existing profit is more or the new profit is more

*/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int min=a[0];
        int ans=0;
        for(int i=1; i<a.size();i++){
            if(a[i]<min)min=a[i];
            ans=max(ans, a[i]-min);
        }
        
        
        return ans;
    }
};
