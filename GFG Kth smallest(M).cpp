class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        priority_queue<int,vector<int>,greater<int>> p;
        for(int i=l; i<=r; i++){
            p.push(arr[i]);
        }
        while(k>1){
            p.pop();
            k--;
        }
        return p.top();
    }
};
