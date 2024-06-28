class Solution {
public:
    static bool comp(int a, int b){
        return a>b;
    }
    int thirdMax(vector<int>& nums) {
        unordered_set<int> temp;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            if(temp.find(nums[i])==temp.end()){
                temp.insert(nums[i]);
                ans.push_back(nums[i]);
            }
        }
        sort(ans.begin(), ans.end(), comp);
        cout<<ans.size();
        if(ans.size()>2){
            return ans[2];
        }
        return ans[0];
    }
};