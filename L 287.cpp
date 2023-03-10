/* BRUTE FORCE, without sorting, but this gives time exceeded for some cases*/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                if(nums[i]==nums[j]){
                    return nums[j];
                    break;
                }
                else continue;
                
            }
            
        }
        return 0;
    }
};

/* USING HASHMAPS 
key value pair gives frequency for each element*/

class Solution {
public:
    int findDuplicate(vector<int>& n) {
        unordered_map<int, int> m;
        for(auto i:n)m[i]++;            //for all elements of arr n, if key exists then value increase, else it creates new pair with value 1
        for(auto j:m){                  //iterate over map 
            if(j.second>1)return j.first;
        }
        return 0;
    }
};

