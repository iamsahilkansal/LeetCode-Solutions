class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0, n=nums.size();
        for(int i=0; i<n; i++){
            sum+=nums[i];
        }
        int lsum=0;
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans.push_back(abs(sum-lsum-nums[i]-lsum));
            lsum+=nums[i];
        }
        return ans;
    }
};