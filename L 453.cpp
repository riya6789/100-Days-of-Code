/* BRUTE FORCE
sort arr---get largest--- increment rest by 1---again sort---increment---do till get same elements

OPTIMIZED
Instead of adding 1 to elements, subtract one from the bigger numbers to get the same lowest number
So find the difference between the largest with all the other numbers and the final count is given by the sum of these differences

*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int small=nums[0];
        for(int i=1; i<n; i++){
            if(small>nums[i]){
                small=nums[i];
            }
        }
        int count=0;
        for(int j=0; j<n; j++){
            count+=nums[j]-small;
        }

        return count;
        
    }
};


//OR SHORTER

class Solution {
	public:
		int minMoves(vector<int>& nums) {
			int m=INT_MAX;
			for(int n:nums) m = min(m,n);          //foreach loop
			int ans=0;
			for(int n:nums) ans+=n-m;
			return ans;

		}
	};
