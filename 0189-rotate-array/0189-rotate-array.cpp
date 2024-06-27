class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        vector<int>ans;
        int n=nums.size();
        for(int i=n-k; i<n; i++){
            ans.push_back(nums[i]);
        }
        for(int j=0; j<n-k; j++){
            ans.push_back(nums[j]);
        }
        nums=ans;
    }
};