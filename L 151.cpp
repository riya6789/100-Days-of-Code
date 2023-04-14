class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        stack<char> st;
        for(char c:s){
            if(!st.empty() && c==' '){
                while(!st.empty()){
                    ans=st.top()+ans;
                    st.pop();
                }
                ans=" "+ans;
            }
            else if(c==' ') continue;
            else{
                st.push(c);
            }
        }
        while(!st.empty()){
            ans=st.top()+ans;
            st.pop();
        }
        if(ans.at(0)==' ') return ans.substr(1);
        return ans;
    }
};
/*But this is not a good solution*/

/*Better is:*/
class Solution {
public:
    string reverseWords(string s) {
        int i=s.length()-1;
        string ans;
        while(i>=0) {
            while(i>=0 && s[i]==' ') i--;
            int j=i;
            while(i>=0 && s[i]!=' ') i--;
            string sub=s.substr(i+1,j-i);
            ans.append(sub+' ');
        }
        i = ans.length()-1;
        while(ans[i]==' ') {
            i--;
            ans.pop_back();
        }
        return ans;
    }
};
