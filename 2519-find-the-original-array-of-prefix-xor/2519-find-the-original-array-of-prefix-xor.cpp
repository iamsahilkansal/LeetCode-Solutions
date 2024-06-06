class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        vector<int>ans;
        ans.push_back(pref[0]);
        int temp1=ans[0];
        for(int i=1; i<pref.size(); i++){
            ans.push_back(temp1^pref[i]);
            temp1=temp1^ans[i];
        }
        return ans;
    }
};