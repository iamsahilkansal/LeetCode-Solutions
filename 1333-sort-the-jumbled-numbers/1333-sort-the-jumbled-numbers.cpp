class Solution {
public:
    static bool comp(pair<int, int>a, pair<int, int>b){
        if(a.first==b.first){
            return false;
        }
        else{
            return b.first>a.first;
        }
    }
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        vector<pair<int, int>>u;
        for(int i=0; i<nums.size(); i++){
            int a=nums[i];
            int temp=0;
            int j=0;
            if (a == 0) {
                temp = mapping[0];  
            }
            while(a>0){
                temp=pow(10, j)*mapping[a%10]+temp;
                a=a/10;
                j++;
            }
            u.push_back(make_pair(temp, nums[i]));
        }
        vector<int>ans;
        sort(u.begin(), u.end(), comp);
        for(int i=0; i<u.size(); i++){
            ans.push_back(u[i].second);
        }
        return ans;
    }
};