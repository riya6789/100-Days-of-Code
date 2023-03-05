class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
       sort(s.begin(), s.end());                        //start by sorting, so now need to only compare 1st and last string
       string n=s[0];
       string ans=("");
       string m=s[s.size()-1];
       for(int i=0; i<m.size();i++){
           if(n[i]==m[i]) ans+=n[i];                    //if char matches, add to returning string
           else break;
       }
       return ans;
    }
};
