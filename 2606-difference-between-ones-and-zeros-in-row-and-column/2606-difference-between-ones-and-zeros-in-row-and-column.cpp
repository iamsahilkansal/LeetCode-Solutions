class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<int> onesRow(m, 0);
        vector<int> onesCol(n, 0);    
        vector<int> zerosRow(m, 0);    
        vector<int> zerosCol(n, 0);      

        // Calculate the number of ones and zeros in each row
        for (int row = 0; row < m; row++) {
            int zero = 0, one = 0;
            for (int col = 0; col < n; col++) {
                if (grid[row][col] == 0) {
                    zero++;
                } else {
                    one++;
                }
            }
            onesRow[row] = one;
            zerosRow[row] = zero;
        }

        // Calculate the number of ones and zeros in each column
        for (int col = 0; col < n; col++) {
            int zero = 0, one = 0;
            for (int row = 0; row < m; row++) {
                if (grid[row][col] == 0) {
                    zero++;
                } else {
                    one++;
                }
            }
            onesCol[col] = one;
            zerosCol[col] = zero;
        }

        vector<vector<int>> diff(m, vector<int>(n, 0));
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                diff[i][j] = onesRow[i] + onesCol[j] - zerosRow[i] - zerosCol[j];
            }
        }

        return diff;
    }
};