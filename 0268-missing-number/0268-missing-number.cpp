class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int tempSum=0;
        int n=nums.size();
        for(int i=0; i<n; i++){
            tempSum+=nums[i];
        }
        return n*(n+1)/2-tempSum;
    }
};