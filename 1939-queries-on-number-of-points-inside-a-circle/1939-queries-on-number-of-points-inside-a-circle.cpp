class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i=0; i<queries.size(); i++){
            float r=queries[i][2];
            float x=queries[i][0];
            float y=queries[i][1];
            int temp=0;
            for(int j=0; j<points.size(); j++){
                float dis = sqrt(pow(x - (float)points[j][0], 2) + pow(y - (float)points[j][1], 2));
                if(dis<=r){
                    temp++;
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};