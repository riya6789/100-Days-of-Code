class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count; // count of remainders
        int prefixSum = 0;
        int result = 0;
        count[0] = 1; // the empty subarray has a sum of 0, this is also included in the count as 0 is divisible by k
        for (int i = 0; i < n; i++) {
            prefixSum += nums[i];
            int remainder = ((prefixSum % k) + k) % k; // avoid negative remainders
            if (count.find(remainder) != count.end()) {
                result += count[remainder];
            }
            count[remainder]++;
        }
        return result;
    }
};
