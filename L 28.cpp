/* Use substring
make substring for all and check if substring match 
*/

class Solution {
public:
    int strStr(string a, string b) {
        int n1=a.length();
        int n2=b.length();
        if(n1<n2)return -1;
        if(n1==n2){
            if(a==b)return 0;
            else return -1;
        }

        for(int i=0; i<n1-n2+1; i++){
            string s=a.substr(i, n2);
            if(s==b)return i;
        }
        return -1;

    }
};
