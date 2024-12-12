class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==1){
                int temp=0;
                {                    
                    while(i<nums.size() && nums[i]==1){
                        temp++;
                        i++;
                    }
                    i--;
                }
                ans=max(temp, ans);
            }
        }
        return ans;
    }
};