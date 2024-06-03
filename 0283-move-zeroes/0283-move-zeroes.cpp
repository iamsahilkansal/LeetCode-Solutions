class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        for(int j=0; j<nums.size(); j++){
            for(int i=0; i<nums.size()-1; i++){
                if(nums[i]==0){
                    swap(nums[i], nums[i+1]);
                }
            }
        }
    }
};