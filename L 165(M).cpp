class Solution {
public:
    int compareVersion(string v1, string v2) {
        int ans1=0,ans2=0;
        int i=0,j=0;
        while(i<v1.size() || j<v2.size()){
            while(i<v1.size() && v1[i]!='.'){
                ans1=(ans1*10)+(v1[i]-'0');
                i++;
            }
            while(j<v2.size() && v2[j]!='.'){
                ans2=(ans2*10)+(v2[j]-'0');
                j++;
            }
            if(ans1<ans2)return -1;
            if(ans1>ans2)return 1;
            i++;
            j++;
            ans1=0;
            ans2=0;
        }
        return 0;
    }
};
