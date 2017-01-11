class Solution {
public:
    int uniquePaths(int m, int n) {
        int F[100][100];
        memset(F, 0, sizeof(F));
        F[0][0] = 1;
        for(int j = 1; j < n; ++j)
            F[0][j] = F[0][j - 1];
        for(int i = 1; i < m; ++i){
            F[i][0] = F[i - 1][0];
            for(int j = 1; j < n; ++j)
                F[i][j] = F[i - 1][j] + F[i][j - 1];
        }
        return F[m - 1][n - 1];
    }
};