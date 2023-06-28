class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        int l=0;
        int h=n-1;
        int m=0;
        while(l<=h){
            m=(l+h)/2;
            if(m==0 || m==(n-1)) return nums[m];
            if(nums[m]!=nums[m+1]&&nums[m]!=nums[m-1])return nums[m];
            
            if(m%2==0){
                if(nums[m]==nums[m-1])h=m-1;
                else l=m+1;
            }
            else{
                if(nums[m]==nums[m-1])l=m+1;
                else h=m-1;
            } 
        }
        return 0;
    }
};
