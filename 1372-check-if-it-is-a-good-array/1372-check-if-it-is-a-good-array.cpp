class Solution {
public:
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
    bool isGoodArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1){
            if(nums[0]==1){
                return true;
            }
            return false;
        }
        int temp=nums[0];
        for(int i=1; i<nums.size(); i++){
            temp=gcd(nums[i], temp);
            if(temp==1){
                return true;
            }
        }
        return false;
    }
};