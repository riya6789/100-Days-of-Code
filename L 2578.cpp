/*store digits in vector and sort digits
2 pointers i=0 and j=1
form num1 and num2 
*/

class Solution {
public:
    int splitNum(int n) {
        vector<int> v;
        while(n>0){
            int r=n%10;
            v.push_back(r);
            n=n/10;
        }
        sort(v.begin(), v.end());
        int n1=0, n2=0;
        for(int i=0; i<v.size();i=i+2)n1=(n1*10)+v[i];
        for(int i=1; i<v.size();i=i+2)n2=(n2*10)+v[i];
        return n1+n2;
    }
};
