class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> temp;
        for(int i=0; i<nums.size(); i++){
            if(temp.find(nums[i])!=temp.end()){
                return true;
            }
            temp.insert(nums[i]);
        }
        return false;
    }
};