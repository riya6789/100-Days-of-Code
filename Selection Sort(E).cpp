void selectionSort(vector<int>&arr) {
    // Write your code here.
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min])min=j;
        }
        int t=arr[min];
        arr[min]=arr[i];
        arr[i]=t;
    }
}
