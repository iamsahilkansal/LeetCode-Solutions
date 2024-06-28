class Solution {
public:
    static bool comp(vector<int>a, vector<int>b){
        return b[1]<a[1];
    }
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map<int, int> temp;
        for(int i=0; i<roads.size(); i++){
            temp[roads[i][0]]++;
            temp[roads[i][1]]++;
        }
        vector<vector<int>>temp1;
        for(auto x: temp){
            temp1.push_back({x.first, x.second});
        }
        sort(temp1.begin(), temp1.end(), comp);
        
        temp.clear();
        for(int i=0; i<temp1.size(); i++){
            temp1[i][1]=n;
            n--;
        }
        for(int i=temp1.size()-1; i>-1; i--){
            temp[temp1[i][0]]=temp1[i][1];
        }
        long long ans=0;
        for(int i=0; i<roads.size(); i++){
            ans+=temp[roads[i][0]]+temp[roads[i][1]];
        }
        return ans;
    }
};