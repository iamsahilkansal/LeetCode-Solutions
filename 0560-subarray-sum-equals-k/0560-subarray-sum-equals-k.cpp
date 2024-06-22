class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans=0, n=nums.size();
        for(int i=0; i<n; i++){
            int temp=0;
            for(int j=i; j<n; j++){
                temp+=nums[j];
                if(temp==k){
                    ans++;
                }
            }
        }
        return ans;
    }
};