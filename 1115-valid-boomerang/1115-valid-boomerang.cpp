class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        double area=(double)abs(points[0][0]*(points[1][1]-points[2][1])+points[1][0]*(points[2][1]-points[0][1])+points[2][0]*(points[0][1]-points[1][1]))/2.00;
        //cout<<area;
        if(area>0){
            return true;
        }
        return false;
    }
};