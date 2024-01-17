class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int e;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                e=nums[i];
                c=1;
            }
            else if(nums[i]==e)c++;
            else c--;
        }
        return e;
    }
};
