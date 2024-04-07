class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a) {
        stack<int>s;
        int n=a.size();
        for(int x:a){
            bool survive=1;
            if(x>0) s.push(x);
            else{
                while(!s.empty()){
                    int y=s.top();
                    if(y<0) break;
                    else if(x+y==0){
                        survive=0;
                        s.pop();
                        break;
                    }
                    else if(x+y<0) s.pop();
                    else{
                        survive=0;
                        break;
                    }
                }
                if(survive) s.push(x);
            }
        }
        int n2=s.size();
        vector<int>ans(n2);
        int i=n2-1;
        while(!s.empty()){
            ans[i--]=s.top();
            s.pop();
        }
        return ans;
    }
};
