class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size() == 1){
            return nums[0];
        }
        int n = nums.size();
        vector<int> dp(n+1, 0); // Initialize dp vector with size n+1 and all elements 0
        int ans = INT_MIN;
        for(int i = 0; i < n; i++){
            dp[i+1] = max(nums[i], dp[i] + nums[i]);
            ans = max(ans, dp[i+1]);
        }
        return ans;
    }
};