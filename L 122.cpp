/* if next element is larger then find the difference and add to profit
i.e. it works like buying on day i only if the i+1 is larger and selling then, then buying again i+1 per and selling on i+2... this goes on in loop
*/

class Solution {
public:
    int maxProfit(vector<int>& a) {
        int ans=0;
        if(a.size()==1) return ans;
        for(int i=0; i<a.size()-1; i++){
            if(a[i]<a[i+1]) ans+=a[i+1]-a[i];
        }
        return ans;
    }
};
