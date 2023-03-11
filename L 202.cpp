/* store all the sums in a unordered set and 
if sum is 1, return true
else if the value already exists in set, return false as a loop exist
else if value not in set then add it to table
and make n=sum
*/

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(n!=1){                //here only check if n==1, then return true
            int sum=0; 
            while(n){
                int d=n%10;
                sum+=d*d;
                n=n/10;
            }
            if(s.count(sum)) return false;
            s.insert(sum);
            n=sum;

        } return true;
    }
};

/* OR more optimized
use floyd cycle detection algo which takes constant space
*/
