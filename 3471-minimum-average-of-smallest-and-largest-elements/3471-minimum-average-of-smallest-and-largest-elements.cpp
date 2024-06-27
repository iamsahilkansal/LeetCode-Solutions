class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        double minVal=50.0;
        sort(nums.begin(), nums.end());
        for(int i=0; i<nums.size()/2; i++){
            minVal=min(minVal, (double)(nums[i]+nums[nums.size()-i-1])/2);
        }
        return minVal;
    }
};