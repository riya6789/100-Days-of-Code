/*Order of n time and space*/
class Solution {
public:
    int kthFactor(int n, int k) {
        vector<int> v;
        for(int i=1; i<=n; i++){
            if(n%i==0)v.push_back(i);
        }
        if(v.size()>=k)return v[k-1];
        else return -1;
    }
};

/*WITH CONSTANT SPACE*/

class Solution {
public:
    int kthFactor(int n, int k) {
        int c=0;
        for(int i=1; i<=n; i++){
            if(n%i==0)c++;
            if(c==k)return i;
        }
        return -1;
    }
};
