/* using 2 pointers
*/

class Solution {
public:
    int maxArea(vector<int>& h) {
        int i=0; 
        int j=h.size()-1;
        int area=0;
        while(i<j){
            area=max(area, min(h[i], h[j])*(j-i));
            if(h[i]<h[j])i++;
            else j--;
        }
        return area;
    }
};
