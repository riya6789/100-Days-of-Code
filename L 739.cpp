class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        stack<int> s;
        vector<int> v;
        int n=t.size();
        for(int i=n-1;i>=0;i--){
            if(s.empty()){
                s.push(i);
                v.push_back(0);
            }
            else{
                while(!s.empty() && t[i]>=t[s.top()]) s.pop();
                if(s.empty()){
                    s.push(i);
                    v.push_back(0);
                }
                else{
                    v.push_back(s.top()-i);
                    s.push(i);
                }

            }
            
        }
        reverse(v.begin(),v.end());
        return v;
    }
};

