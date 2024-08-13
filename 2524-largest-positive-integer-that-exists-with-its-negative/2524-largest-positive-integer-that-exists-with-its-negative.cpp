class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>uset;
        for(int i=0; i<nums.size(); i++){
            uset.insert(nums[i]);
        }
        int ans=-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>0 && uset.find(-1*nums[i])!=uset.end()){
                ans=max(ans, nums[i]);
            }
        }
        return ans;
    }
};