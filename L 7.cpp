class Solution {
public:
    int reverse(int x) {
        
        long l1=pow(2,31)-1;
        long l2=pow(-2,31);
        long t=0;
        while(x){
            
                t=(t*10)+(x%10);
            x/=10;
            
            
        }
        if(t<l1 && t>l2)return t;
        else return 0;
    }
};
