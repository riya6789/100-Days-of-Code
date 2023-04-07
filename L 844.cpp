class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        
        for(char c:s){           
            if(!s1.empty() && c=='#')s1.pop(); 
            else if(c=='#') continue;
            else s1.push(c);
        }
        for(char c:t){
            if(!s2.empty() && c=='#')s2.pop();
            else if(c=='#') continue;    
            else s2.push(c);
        }
        if(s1.empty() && s2.empty())return true;
        if(s1.empty() || s2.empty())return false;
        while(!s1.empty() && !s2.empty()){
            if(s1.top()==s2.top()){
                s1.pop();
                s2.pop();
            }
            else return false;
        }
        if(s1.empty() && s2.empty())return true;
        else return false;
    }
};
