class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=INT_MIN;
        int n=nums.size();
        int temp=0;
            for(int i=0; i<n;i++){
                    temp+=nums[i];
                    sum=max(sum,temp);
                    temp=max(temp,0);
                }   
        return sum;
    }
};
