class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        for(int i=0; i<n; i++){
            if(edges[i][0]>edges[i][1]){
                swap(edges[i][0], edges[i][1]);
            }
        }
        for(int i=0; i<n-1; i++){
            if(edges[i][0]!=edges[i+1][0]){
                return edges[0][1];
            }
        }
        return edges[0][0];
    }
};