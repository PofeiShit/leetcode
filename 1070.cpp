class Solution {
public:
    int climbStairs(int n) {
        int *F = new int[n + 1];
        F[0] = 1;
        F[1] = 1;
        for(int i = 2; i <= n; ++i){
            F[i] = F[i - 1] + F[i - 2];
        }
        return F[n];
    }
};