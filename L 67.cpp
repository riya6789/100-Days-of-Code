/*start with the rightmost of the 2 numbers
remember to convert to int while doing operations
so keep adding to int c by converting to int(- 0 ki ascii value)
the final ans by adding c%2 but this gives the reverse ans
also do c=c/2
then finally reverse the ans using the inbuilt function.
*/

class Solution {
public:
    string addBinary(string a, string b) {
        int c=0;
        int i=a.length()-1;
        int j=b.length()-1;
        string ans;
        while(i>=0 || j>=0 || c){
            if(i>=0){
                c+=a[i]-'0';
                i--;
            }
            if(j>=0){
                c+=b[j]-'0';
                j--;
            }
            ans+=(c%2+'0');
            c=c/2;
            
            
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
