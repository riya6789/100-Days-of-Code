class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for (int num : nums) {
            st.insert(num);
        }

        int longest = 0;

        for (int num : nums) {
            // Only process if the current number is the start of a sequence
            if (st.find(num - 1) == st.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Find the length of the consecutive sequence starting from the current number
                while (st.find(currentNum + 1) != st.end()) {
                    currentNum++;
                    currentStreak++;
                }

                longest = max(longest, currentStreak);
            }
        }

        return longest;
    }
};
