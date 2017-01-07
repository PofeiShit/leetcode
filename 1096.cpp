class Solution {
public:
    int numTrees(int n) {
        double *F = new double[n + 1];
        memset(F, 0, sizeof(F));
        F[0] = 1;
        F[1] = 1;
        for(int i = 2; i <= n; ++i){
            for(int j = 1; j <= (i / 2); ++j)
                    F[i] += F[i - j] * F[j - 1] * 2;
            if(i % 2 != 0){
                F[i] += F[i / 2] * F[i / 2];
            }
        }
        return F[n];
    }
};