class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m =matrix.size();
        int n=matrix[0].size();
        unordered_set<int> rows, cols;
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    if(rows.find(i)==rows.end()){
                        rows.insert(i);
                    }
                    if(cols.find(j)==cols.end()){
                        cols.insert(j);
                    }
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(rows.find(i)!=rows.end() || cols.find(j)!=cols.end()){
                    matrix[i][j]=0;
                }
            }
        }
    }
};