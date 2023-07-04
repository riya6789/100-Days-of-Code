//New my method -> store the nge in the map only for all elements of array b and finally retrieve nge from map for all elements of arr a
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        int n=b.size();
        stack<int>s;
        vector<int>v;
        unordered_map<int,int>m;
        m[b[n-1]]=-1;
        s.push(b[n-1]);
        for(int i=n-2; i>=0; i--){
            while(!s.empty() && s.top()<=b[i]) s.pop();
            m[b[i]]=s.empty()?-1:s.top();
            s.push(b[i]);
        }
        for(int j:a){
            v.push_back(m[j]);
        }
        return v;
    }
};

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
