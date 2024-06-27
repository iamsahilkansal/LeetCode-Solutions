class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size(), low=0, high=n-1, mid;
        
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target>nums[mid]){
                low=mid+1;
            }
            else if(target<nums[mid]){
                high=mid-1;
            }
        }
        
        return low;
    }
};