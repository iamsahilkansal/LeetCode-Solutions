class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int minDiff=INT_MAX;
        for(int i=1; i<arr.size(); i++){
            if((arr[i]-arr[i-1])<minDiff){
                minDiff=(arr[i]-arr[i-1]);
            }
        }
        vector<vector<int>>ans;
        for(int i=1; i<arr.size(); i++){
            if((arr[i]-arr[i-1])==minDiff){
                vector<int>temp={arr[i-1], arr[i]};
                ans.push_back(temp);
            }
        }
        return ans;
    }
};