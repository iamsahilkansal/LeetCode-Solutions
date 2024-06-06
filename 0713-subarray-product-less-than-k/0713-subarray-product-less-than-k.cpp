class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int ans=0;
        int temp;
        for(int i=0; i<nums.size(); i++){
            temp=1;
            for(int j=i; j<nums.size(); j++){
                temp*=nums[j];
                if(temp>=k){
                    break;
                }
                if(temp<k){
                    ans++;
                }
            }
        }
        return ans;
    }
};