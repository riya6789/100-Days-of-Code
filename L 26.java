class Solution {
    public int removeDuplicates(int[] nums) {
        int i=0;
        int j=1;

        while(j<nums.length){
            if(nums[i]==nums[j]){ j++; }          //simply increase right pointer, no need to delete element
            else{
                nums[i+1]=nums[j];                //when different elements, just put next of current element as this different element
                i++;
                j++;
            }
            
        } return i+1;                             // finally return i+1 as that gives us the total count of unique elements
    } 
}
