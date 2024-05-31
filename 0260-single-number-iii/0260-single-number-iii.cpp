class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int, int>umap;
        for(auto x: nums){
            umap[x]++;
        }
        vector<int>ans;
        for(auto x:umap){
            if(x.second==1){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};