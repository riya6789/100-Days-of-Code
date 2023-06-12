class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c=0;
        int t=0;
        for(int i=0; i<nums.size(); i++){
            
            if(nums[i]==1)t++;
            else{
                c=max(t,c);
                t=0;
            }
        }
        return max(t,c);

    }
};
