class Solution {
public:
    int reverse(int x) {
        int sum = 0, p = 0;
        char s[33];
        int sign = 1;
        if(x < 0){
            sign = -1;
            x = -x;
        }
        sprintf(s, "%d", x);
        int len = strlen(s);
        for(int i = len - 1; i >= 0; i--){
            sum += (s[i] - '0') * pow(10, i);
            if(sum < 0){
                sum = 0;
                break;
            }
        }
        return sum * sign;
    }
};