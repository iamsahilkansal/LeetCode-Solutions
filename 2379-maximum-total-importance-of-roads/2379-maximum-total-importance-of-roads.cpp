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
        priority_queue<pair<int, int>> q;
        for(auto x: temp){
            q.push({x.second, x.first});
        }
        temp.clear();
        while(!q.empty()){
            auto x=q.top();
            temp[x.second]=n;
            n--;
            q.pop();
        }
        long long ans=0;
        for(int i=0; i<roads.size(); i++){
            ans+=temp[roads[i][0]]+temp[roads[i][1]];
        }
        return ans;
    }
};