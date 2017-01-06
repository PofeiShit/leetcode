class Solution {
public:
    int myAtoi(string str) {
        int len = str.length(), sign = 1, pos = 0, ans = 0;
        //先删最前面的空格
        for(int i = 0; i < len; i++){
            if(str[i] == ' ')
                pos++;
            else 
                break;
        }
        str.erase(str.begin(), str.begin() + pos);
        len = str.length();
        //查看是否有+,-号，有则删之
        if(str[0] == '-'){
            sign = -1;
            str.erase(str.begin(), str.begin() + 1);
        } else if(str[0] == '+'){
            str.erase(str.begin(), str.begin() + 1);
        }
        //把从其他符号开始之后的都删除
        len = str.length(), pos = -1;
        for(int i = 0; i < len; i++){
            if(str[i] < '0' || str[i] > '9'){
                pos = i;
                break;
            }
        }
        if(pos != -1)
            str.erase(str.begin() + pos, str.end());
        if(str.empty())
            return 0;
        //跳过前面的0部分
        len = str.length();
        pos = 0;
        for(int i = 0; i < len; i++){
            if(str[i] != '0'){
                pos = i;
                break;
            }
        }
        //当正溢出的时候,得到溢出值为-
        //当负溢出的时候,得到溢出值为+
        for(int i = pos; i < len; i++){
            ans += (str[i] - '0') * pow(10, len - i - 1) * sign;
            if(ans < 0 && sign == 1)
                return 2147483647;
            else if(ans > 0 && sign == -1)
                return -2147483648;
        }
        return ans;
    }
};