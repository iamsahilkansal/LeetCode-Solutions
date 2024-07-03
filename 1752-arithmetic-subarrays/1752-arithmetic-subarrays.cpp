class Solution {
public:
    bool func(vector<int> a){
        int d=a[1]-a[0];
        for(int i=2; i<a.size(); i++){
            if(a[i]-a[i-1]!=d){
                return false;
            }
        }
        return true;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;
        for(int z=0; z<l.size(); z++){
            vector<int>temp;
            for(int i=l[z]; i<=r[z]; i++){
                temp.push_back(nums[i]);
            }
            sort(temp.begin(), temp.end());
            ans.push_back(func(temp));
        }
        return ans;
    }
};