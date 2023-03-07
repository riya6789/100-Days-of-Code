/* run loop from 1st element, when get a non-0 num, add it to arr[k] where int k starts from 0 and then increment k when put non-0 num in that position
do this for whole size of arr
then run another loop and add 0 to remaining spaces
*/

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                nums[k]=nums[i];
                k++;
            }
        }
        for(int i=k; i<nums.size(); i++){
            nums[i]=0;                                    //dont return anything as it is void function
        }
    }
};
