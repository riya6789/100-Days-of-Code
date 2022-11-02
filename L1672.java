//Problem
Richest Customer Wealth (E)

//Pseudocode
2D arr given, we find the sum of values of the 1st row to get the 1st person's wealth, sum of 2nd row gives the wealth of the 2nd person and so on
  We need to find the person with the richest wealth
  
//Code
class Solution {
    public int maximumWealth(int[][] accounts) {
        int res=0;
        
        for(int i=0; i<accounts.length; i++){
            int sum=0;
            for(int j=0; j<accounts[i].length; j++){
                sum=sum +accounts[i][j];
                
            }
            res= Math.max(res, sum);                 //not store sum ki values in a new array
        }
        return res;
    }
}
