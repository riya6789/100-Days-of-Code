class Solution {
public:
    string intToRoman(int num) {
        string r[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};    //instead of storing in hashmap, just make arr
        int n[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};                        //just add 4 and 9 here in the arr only, dont do operations for it
        string ans;

        for(int i=0; i<13;i++){
            while(num>=n[i]){                       //if left num is more than number in arr, then append it to the string and decrease that value from the number
                ans.append(r[i]);
                num-=n[i];

            }
        }
        return ans;

    }
};
