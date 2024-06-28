class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> temp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(temp.find(nums[i])==temp.end()){
                temp.insert(nums[i]);
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(), ans.end());
        if(ans.size()>2){
            return ans[ans.size()-3];
        }
        return ans[ans.size()-1];
    }
};