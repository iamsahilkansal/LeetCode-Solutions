class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        long long MOD=1000000007;
        vector<long long>ans;
        for(int i=0; i<nums.size(); i++){
            long long sum=0;
            for(int j=i; j<nums.size(); j++){
                sum+=nums[j];
                ans.push_back(sum);
            }
        }
        sort(ans.begin(), ans.end());
        long long sum=0;
        for(int i=left-1; i<right; i++){
            sum+=ans[i];
        }
        return sum%MOD;
    }
};