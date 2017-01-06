class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0)
            x = 1 / x;
        long long m = n;
        m = m < 0 ? -m : m;
        if(m == 0)
            return 1;
        if(m == 1)
            return x;
        double a = myPow(x, (int)(m / 2));
        if(m % 2 == 0)
            return a * a;
        else 
            return a * a * x;
    }
};