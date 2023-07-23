class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m;
        unordered_set<int>s;
        for(int i:arr){
            m[i]++;
        }
        for(auto i:m){
            int c=i.second;
            if(s.find(c)!=s.end())return false;
            else s.insert(c);
        }
        return true;
    }
};
