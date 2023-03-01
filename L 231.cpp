// keep dividing the number by 2 till get 0, ensuring that remainder is always 0

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==1)return true;
        if(n<=0) return false;
        while(n>1){
            int rem=n%2;
            if(rem==1) return false;
            n=n/2;

        }
        return true;
}
        
};
