class NeighborSum {
public:
    vector<vector<int>>grid1;
    int n, m;
    NeighborSum(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        grid1.resize(n, vector<int>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                grid1[i][j]=grid[i][j];
            }
        }
    }
    
    int adjacentSum(int value) {
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid1[i][j]==value){
                    if(i>=1){
                        sum+=grid1[i-1][j];
                    }
                    if(j>=1){
                        sum+=grid1[i][j-1];
                    }
                    if(i<n-1){
                        sum+=grid1[i+1][j];
                    }
                    if(j<m-1){
                        sum+=grid1[i][j+1];
                    }
                }
            }
        }
        return sum;
    }
    
    int diagonalSum(int value) {
        int sum=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid1[i][j]==value){
                    if(i>=1 && j>=1){
                        sum+=grid1[i-1][j-1];
                    }
                    if(i>=1 && j<m-1){
                        sum+=grid1[i-1][j+1];
                    }
                    if(i<n-1 && j>=1){
                        sum+=grid1[i+1][j-1];
                    }
                    if(i<n-1 && j<m-1){
                        sum+=grid1[i+1][j+1];
                    }
                }
            }
        }
        return sum;
    }
};

/**
 * Your NeighborSum object will be instantiated and called as such:
 * NeighborSum* obj = new NeighborSum(grid);
 * int param_1 = obj->adjacentSum(value);
 * int param_2 = obj->diagonalSum(value);
 */