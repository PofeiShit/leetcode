class Solution {
public:
    int divide(int dividend, int divisor) {
        long int ans = 0;
        long int divid = dividend, divis = divisor;
        int flag = 1;
        const int MAX_INT = 2147483647;
        if(divisor == 0)
            return MAX_INT;
        else if(divisor == 1)
            return dividend;
        else {
            if(divid < 0 && divis < 0){
                divid = -divid;
                divis = -divis;
            } else if(divid < 0){
                flag = -1;
                divid = -divid;
                divis = divis;
            } else if(divis < 0){
                flag = -1;
                divis = -divis;
                divid = divid;
            }
            cout << divid << '\t' << divis << endl;
            ans = pow(2, (log2(divid) - log2(divis)));    
            cout << ans << endl;
        }
        if(flag == -1)
            ans = -ans;
        if(ans > MAX_INT)
            return MAX_INT;
        return ans;
    }
};