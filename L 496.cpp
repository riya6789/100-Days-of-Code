class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& n1, vector<int>& n2) {
        vector<int> ans;
        stack<int> s;
        unordered_map<int,int> m;
        for(int i=n2.size()-1; i>=0; i--){
            if(s.empty()) {
                s.push(n2[i]);
                m.insert({n2[i],-1});
            }
            else{
                while(!s.empty() && n2[i]>=s.top()){
                    s.pop();
                }
                if(s.empty()) {
                s.push(n2[i]);
                m.insert({n2[i],-1});
                }
                if(n2[i]<s.top()){
                    m.insert({n2[i],s.top()});
                    s.push(n2[i]);
                }
                

            }
        }
        for(int it=0; it<n1.size();it++){
            auto it1=m.find(n1[it]);
            ans.push_back(it1->second);
        }
        return ans;
        
    }
};
