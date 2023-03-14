/* to check if square, just need to check if among the 6 distances, 4 are same and 2 are same, no need to check angles.
using set, insert values of distances and there should be only 2 values in it coz it only stores unique values
if distance!=0 then only insert in set, else return false as then same points so not square
*/

class Solution {
public:
double d(vector<int> p1, vector<int>p2){
    return sqrt(((p2[0]-p1[0])*(p2[0]-p1[0]))+((p2[1]-p1[1])*(p2[1]-p1[1])));
}
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> v={p1,p2,p3,p4};
        unordered_set<double> s;
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                double val=d(v[i],v[j]);
                if(val!=0)s.insert(val);
                else return false;
            }
        }
        return s.size()==2;
    }
};

/*DECREASED RUN TIME: calculate all 6 distances without loop*/

class Solution {
public:
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        double d1=sqrt((p1[0]-p2[0])*(p1[0]-p2[0])+(p1[1]-p2[1])*(p1[1]-p2[1])), d2=sqrt((p1[0]-p3[0])*(p1[0]-p3[0])+(p1[1]-p3[1])*(p1[1]-p3[1])), d3=sqrt((p3[0]-p2[0])*(p3[0]-p2[0])+(p3[1]-p2[1])*(p3[1]-p2[1])), d4=sqrt((p3[0]-p4[0])*(p3[0]-p4[0])+(p3[1]-p4[1])*(p3[1]-p4[1])), d5=sqrt((p1[0]-p4[0])*(p1[0]-p4[0])+(p1[1]-p4[1])*(p1[1]-p4[1])), d6=sqrt((p4[0]-p2[0])*(p4[0]-p2[0])+(p4[1]-p2[1])*(p4[1]-p2[1]));

        vector<double> pts={d1,d2,d3,d4,d5,d6};
        unordered_set<double> s;
        for(int i=0; i<6;i++){
            if(pts[i]!=0)s.insert(pts[i]);
            else return false;
        }
        return s.size()==2;
    }
};
