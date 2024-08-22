class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag=true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]<nums[i-1]){
                flag=false;
                break;
            }
        }
        if(flag){
            return true;
        }
        flag =true;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]>nums[i-1]){
                flag=false;
                break;
            }
        }
        return flag;
    }
};