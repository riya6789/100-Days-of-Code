class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> s;
        int n=h.size();
        vector<int> ls(n);
        vector<int> rs(n);
        for(int i=0;i<n;i++){
            while(!s.empty() && h[s.top()]>=h[i]) s.pop();
            if(s.empty()) ls[i]=0;
            else ls[i]=s.top()+1;
            s.push(i);
        }

        while(!s.empty()) s.pop();

        for(int i=n-1;i>=0;i--){
            while(!s.empty() && h[s.top()]>=h[i]) s.pop();
            if(s.empty()) rs[i]=n-1;
            else rs[i]=s.top()-1;
            s.push(i);
        }

        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans, h[i]*(rs[i]-ls[i]+1));
        }
        return ans;
    }
};
