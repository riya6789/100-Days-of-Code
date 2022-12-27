class Solution {
    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);                                    \\ simple sort function T= NlogN
        for(int i=1; i < nums.length; i++) {
            if(nums[i] == nums[i-1]) {
                return true;
            }
        }

        return false;
    }
}
