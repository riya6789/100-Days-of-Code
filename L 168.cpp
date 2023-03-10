/* A=1, AA= 26+1, AZ= 26*2, BZ=26*3... YZ=26*26 ie (25+1)*26 
*/

class Solution {
public:
    string convertToTitle(int n) {
        string ans;
        while(n>0){
            n--;                       
            int r=n%26;
            ans=char('A'+r)+ans;          //not ans+= karke coz usse reverse string aayegi
            n=n/26;
        }
        return ans;
    }
};

/* More optimized
make a string map containing all the capital letters
depending on the remainder, get the string[i] value and add to the string and finally reverse the string
*/

class Solution {
public:
    string convertToTitle(int n) {
        string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        string ans;
        while(n>0){
            n--;
            int r=n%26;
            n=n/26;
            ans+=s[r];
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
