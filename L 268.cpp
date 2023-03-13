/*BRUTE
sort and then based on if difference between elements is 1, choose the missing number
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==1){
            if(nums[0]==0) return nums.size();
            else return 0;
            }
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()-1; i++){
            int diff=nums[i+1]-nums[i];
            if(diff!=1){
                return nums[i]+1;
                break;
            }
            
        
        }
        if(nums[nums.size()-1]==nums.size())return 0;
        else return nums.size();
    }
};

/*BETTER*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int k=0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==k)k++;                   
        }
        return k;
    }
};

/*BEST*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size() ;
        int sum = n * (n + 1)/2 ;
        for (int i = 0 ; i < n ; i ++)
        {
            sum = sum - nums[i] ;
        }
        return sum ;
    }
};
