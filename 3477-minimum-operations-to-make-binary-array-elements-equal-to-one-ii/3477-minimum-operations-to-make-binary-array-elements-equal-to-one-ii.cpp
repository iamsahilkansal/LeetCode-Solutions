class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size(), flag=1;
        int ans=0;
        for(int i=0; i<n; i++){
            if(nums[i]!=flag){
                ans++;
                flag=(flag+1)%2;
            }
        }
        return ans;
    }
};