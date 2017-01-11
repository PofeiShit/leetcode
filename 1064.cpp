class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int F[200][200];
        int rows = grid.size(), cols = grid[0].size();
        F[0][0] = grid[0][0];
        for(int j = 1; j < cols; ++j)
            F[0][j] = F[0][j - 1] + grid[0][j];
        for(int i = 1; i < rows; ++i){
            F[i][0] = F[i - 1][0] + grid[i][0];
            for(int j = 1; j < cols; ++j)
                F[i][j] = min(F[i][j - 1], F[i - 1][j]) + grid[i][j];
        }
        return F[rows - 1][cols - 1];
    }
};