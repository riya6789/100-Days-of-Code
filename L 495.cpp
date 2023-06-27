  class Solution {
public:
    int findPoisonedDuration(vector<int>& arr, int d) {
        int count=0;
        int i=0;
        for(i=0; i<arr.size()-1; i++){
            int t=arr[i]+d-1;
            if(t<arr[i+1]){
                count+=d;
            }
            else{
                count+=arr[i+1]-arr[i];
            }
        }
        count+=d;
        return count;
    }
};
