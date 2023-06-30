class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l=0, h=nums.size()-1;
        if(t>nums[h])return h+1;
        while(l<=h){
            int m=(l+h)/2;
            if(nums[m]==t) return m;
            else if(nums[m]>t)h=m-1;
            else l=m+1;
        }
        return l;
    }
};
