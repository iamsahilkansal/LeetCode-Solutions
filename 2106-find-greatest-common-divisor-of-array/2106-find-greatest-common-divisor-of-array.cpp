class Solution {
public:
    int gcd(int a, int b){
        if(b==0){
            return a;
        }
        return gcd(b, a%b);
    }
    int findGCD(vector<int>& nums) {
        int min=INT_MAX, max=INT_MIN, n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]>max){
                max=nums[i];
            }
            if(nums[i]<min){
                min=nums[i];
            }
        }
        cout<<min<<" "<<max;
        return gcd(max, min);
    }
};