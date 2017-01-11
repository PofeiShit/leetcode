class Solution {
public:
    int mySqrt(int x) {
        double D = (double)x;
        double xi = (1 + D) / 2;
        double delta = D - xi;
        while(delta > 0.1){
            double z = (xi + D / xi) / 2;
            delta = xi - z;
            xi = z;
        }
        return (int)xi;
    }
};