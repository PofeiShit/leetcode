class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int F[100][100];
        int rows = obstacleGrid.size(), cols = obstacleGrid[0].size();
        if(obstacleGrid[0][0] == 1)
            F[0][0] = 0;
        else 
            F[0][0] = 1;
        for(int j = 1; j < cols; ++j){
            if(obstacleGrid[0][j] == 1)
                F[0][j] = 0;
            else 
                F[0][j] = F[0][j - 1];
        }
        for(int i = 1; i < rows; ++i){
            if(obstacleGrid[i][0] == 1)
                F[i][0] = 0;
            else 
                F[i][0] = F[i - 1][0];
            for(int j = 1; j < cols; ++j){
                if(obstacleGrid[i][j] == 1)
                    F[i][j] = 0;
                else {
                    F[i][j] = F[i][j - 1] + F[i - 1][j];
                }
            }
        }

        return F[rows - 1][cols - 1];
    }
};