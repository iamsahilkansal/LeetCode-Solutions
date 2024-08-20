class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int val1=INT_MAX, val2=INT_MAX;
        for(int i=0; i<nums1.size(); i++){
            val1=min(nums1[i], val1);
            val2=min(nums2[i], val2);
        }
        return val2-val1;
    }
};