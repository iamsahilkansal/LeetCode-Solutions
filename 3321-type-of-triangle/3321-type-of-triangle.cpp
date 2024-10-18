class Solution {
public:
    string triangleType(vector<int>& nums) {
        if(nums[0]+nums[1]<=nums[2] || nums[1]+nums[2]<=nums[0] || nums[0]+nums[2]<=nums[1]){
            return "none";
        }
        int ans=0;
        unordered_set<int>temp;
        for(int i=0; i<nums.size(); i++){
            if(temp.find(nums[i])!=temp.end()){
                ans++;
            }
            temp.insert(nums[i]);
        }
        if(ans==0) return "scalene";
        if(ans==1) return "isosceles";
        return "equilateral";
    }
};