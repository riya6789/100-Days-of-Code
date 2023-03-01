/* BRUTE FORCE
sort arr---product of last 3 numbers and first 2*last element(not first 3, coz they will give a negative number and hence will always be smallest)(in case of larger negative numbers)---return whichever is the biggest

*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int m1=nums[n-1]*nums[n-2]*nums[n-3];
        int m2=nums[0]*nums[1]*nums[n-1];
        if(m1>m2) return m1;
        else return m2;
    }
};
