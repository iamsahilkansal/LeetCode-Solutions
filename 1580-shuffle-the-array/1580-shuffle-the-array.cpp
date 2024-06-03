class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int ptr1=0, ptr2=n;
        while(ptr1<nums.size() && ptr2<nums.size()){
            ans.push_back(nums[ptr1]);
            ans.push_back(nums[ptr2]);
            ptr1++;
            ptr2++;
        }
        return ans;
    }
};