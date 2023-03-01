//simply by converting to string
class Solution {
public:
    bool isPalindrome(int x) {
        string str = to_string(x);
        
        for(int i = 0; i < str.length() / 2; i++){
            if(str[i] != str[str.length() - i - 1]) return false;
        }
        
        return true;
    }
};


/* Now do without converting to string 
if negtive number then directly false, if 1 digit then directly true
make a new variable n=x---now while n!=0, in a new variable t, store the values in the opposite order
at last check if x=t

*/

class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        else if((x/10)==0) return true;
        else{
            long n=x;
            long t=0;
            while(n){
                t=(t*10)+(n%10);                     //not just t+=n%10 coz that will just give the sum, and we need the                                                               reverse of it
                n=n/10;
            }
            if(t==x) return true;
            else return false;
        }
        
    }
};

