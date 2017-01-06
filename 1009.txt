class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        int len = 0, y = x;
        while(y != 0){
            len++;
            y /= 10;
        }
        y = x;
        for(int i = 0; i < len; i++){
            int a = x % 10;
            int b = pow(10, len - i - 1);
            if(a != (y / b))
                return false;
            else{
                x /= 10;
                y %= b;
            }
        }
        return true;
    }
};