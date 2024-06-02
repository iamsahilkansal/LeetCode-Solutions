class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        unordered_set<long long int>temp;
        vector<string>ans;
        int n=nums.size();
        for(int i=0; i<n; i++){
            temp.insert(nums[i]);
        }
        cout<<to_string(-213);
        for(int i=0; i<n; i++){
            if(temp.find((long long int)nums[i]+1)==temp.end()){
                ans.push_back(to_string(nums[i]));
            }
            else{
                int start=nums[i];
                while(temp.find((long long int)nums[i]+1)!=temp.end()){
                    i++;
                }
                int end=nums[i];
                ans.push_back(to_string(start)+"->"+to_string(end));
            }
        }
        return ans;
    }
};