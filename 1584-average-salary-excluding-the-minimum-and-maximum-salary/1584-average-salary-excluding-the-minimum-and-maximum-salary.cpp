class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        double ans=0.00;
        for(int i=1; i<salary.size()-1; i++){
            ans+=salary[i];
        }
        return ans/double(salary.size()-2);
    }
};