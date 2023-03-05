class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for (char c : s) {
            if (c == '(') {                      //here push the opposing one in the stack and then compare later on 
                stk.push(')');
            } else if (c == '[') {
                stk.push(']');
            } else if (c == '{') {
                stk.push('}');
            } else {
                if (stk.empty() || stk.top() != c) {
                    return false;
                }
                stk.pop();                     //if stack not empty and stop of the char in the stack matches the current char, then pop
            }
        }
        return stk.empty();                   //return boolean true or false
    }
};
