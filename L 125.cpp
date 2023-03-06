class Solution {
public:
    bool isPalindrome(string s) {
        if(s.empty() || s.size()==1) return true;
        string temp=("");
        for(int i=0; i<s.size();i++){
            if(isalpha(s[i])||(isdigit(s[i]))){            //gives only alphanumeric characters
                temp+=tolower(s[i]);
            }

        }
        if(temp.size()==0) return true;
        int mid=temp.size()/2;
        int p=0;
        int q=temp.size()-1;
        while(p<=mid){
            if(temp[p] == temp[q]){
                p++;
                q--;
            }
            else return false;
        }
        return true;

    }
};
