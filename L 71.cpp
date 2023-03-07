/*DS used is queue BRUTE FORCE
 put "/" first
 if get character simply add in queue
 if get ".", dont add in queue
 if get "..", remove last char
 if get "/", check if last element is also "/" then dont add to queue
 if top "/", remove from queue
 finally return queue
 */

/*  OPTIMIZED
make a stack of strings
if "/", then skip doing anything
if get any other char, add to temp string till get "/"
now if temp is ".", simply skip 
    else if temp is "..", and stack not empty, then pop
    else, any other string formed, push it to stack
now all strings added to stack
till string not empty, do additions in res like /+top+res, so this gives the final ans in reverse order of stack, and now we dont need to make a new stack for reversing the elements, this also satisfies the condition that it should start with "/" and not end "/"
finally if no string present, then just return "/"
*/

class Solution {
public:
    string simplifyPath(string path) {
        
        stack<string> st;
        string res;
        
        for(int i = 0;  i<path.size(); ++i)
        {
            if(path[i] == '/')    
                continue;
            string temp;
			// iterate till we doesn't traverse the whole string and doesn't encounter the last /
            while(i < path.size() && path[i] != '/')
            {
				// add path to temp string
                temp += path[i];
                ++i;
            }
            if(temp == ".")    //here string taken, not char
                continue;
			// pop the top element from stack if exists
            else if(temp == "..")
            {
                if(!st.empty())
                    st.pop();
            }
            else
			// push the directory file name to stack
                st.push(temp);
        }
        
		// adding all the stack elements to res
        while(!st.empty())
        {
            res = "/" + st.top() + res;
            st.pop();
        }
        
		// if no directory or file is present
        if(res.size() == 0)
            return "/";
        
        return res;
    }
};
