// Problem Statement (E)
Shuffle the Array

//Pseudocode
So here we are given an array of 2n elements and the value of "n" which is the place we need to divide the array from 
x1 x2... y1 y2...
arrange it in order x1 y1 x2 y2
We can use pointers here. taking 3 pointers i and j and k(for new arr), i starts from index 0, j starts from index n
Print element at i, i++ then print element at j, j++

//code
class Solution {
    public int[] shuffle(int[] nums, int n) {
         int i=0;
            int j=n;
        int k=0;                     //these 3 pointers outside loop
        int[] arr= new int [2*n];    //declaring new arr to store values 
        while(k<2*n){
           
            arr[k]=nums[i];
            k++;
            arr[k]=nums[j];
            k++;
            i++;
            j++;
            
        } 
        return arr;                   **//dont forget this**
    }
}
