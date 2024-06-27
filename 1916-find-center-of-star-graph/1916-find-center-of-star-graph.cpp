class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_set<int>a;
        int n=edges.size();
        int temp1=0;
        for(int i=0; i<n; i++){
            if(a.find(edges[i][0])==a.end()){
                temp1++;
                a.insert(edges[i][0]);
            }
            if(a.find(edges[i][1])==a.end()){
                temp1++;
                a.insert(edges[i][1]);
            }
        }
        unordered_map<int, int> temp;
        for(int i=0; i<n; i++){
            temp[edges[i][0]]++;
            temp[edges[i][1]]++;
            if(temp[edges[i][0]]==temp1-1){
                return edges[i][0];
            }
            else if(temp[edges[i][1]]==temp1-1){
                return edges[i][1];
            }
        }
        return -1;
    }
};