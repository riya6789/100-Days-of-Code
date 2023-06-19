class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        unordered_set<double> s;
        int i=0; int j=n-1;
        while(i<j){
            double t=(double)(nums[i]+nums[j])/2.0;
            s.insert(t);
            i++;
            j--;
        }
        return s.size();
    }
};
