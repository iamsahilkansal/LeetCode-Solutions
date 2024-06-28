class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>temp;
        for(int i=0; i<nums.size(); i++){
            temp[nums[i]]++;
        }
        priority_queue<pair<int, int>>q;
        for(auto x: temp){
            q.push({x.second, x.first});
        }
        vector<int>ans;
        while(k>0){
            auto x=q.top();
            ans.push_back(x.second);
            q.pop();
            k--;
        }
        return ans;
    }
};