class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int temp;
        int idx=-1;
        for(int i=n-1; i>=1; i--){
            if(nums[i]>nums[i-1]){
                temp=nums[i-1];
                idx=i-1;
                break;
            }
        }
        for(int i=n-1; i>=idx+1 && idx!=-1; i--){
            if(temp<nums[i]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
        
        reverse(nums.begin()+idx+1,nums.end());
    }

};
