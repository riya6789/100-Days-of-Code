/* map mein store the count of all elements, if count>1, then vector mein start inserting that element from the start and then resize the vector to only show it till newly inserted elements
*/

class Solution {
public:
    vector<int> findDuplicates(vector<int>& n) {
        unordered_map<int, int> m;
        for(auto i:n){
            m[i]++;
        }
        int x=0;
        for(auto i:m){
            if(i.second>1){
                n[x]=i.first;
                x++;
            }
        }
        n.resize(x);

        return n;
    }
};
