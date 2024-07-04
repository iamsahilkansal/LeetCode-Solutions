class Solution {
public:
    static bool comp(int a, int b){
        return a>b;
    }
    int removeElement(vector<int>& nums, int val) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==val){
                ans++;
                nums[i]=-1;
            }
        }
        sort(nums.begin(), nums.end(), comp);
        return nums.size()-ans;
    }
};