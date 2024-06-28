class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n=nums.size();
        bool flag=false;
        int initialPos=-1, finalPos=-1;
        for(int i=0; i<n; i++){
            if(nums[i]==target){
                flag=true;
                initialPos=i;
                for(finalPos=initialPos; finalPos<n-1; finalPos++){
                    if(nums[finalPos+1]!=target){
                        break;
                    }
                }
                break;
            }
        }
        ans.push_back(initialPos);
        ans.push_back(finalPos);
        return ans;
    }
};