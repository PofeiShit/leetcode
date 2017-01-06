class Solution {
public:
    string intToRoman(int num) {
            char r[4][10][5] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX",
                                "","X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC",
                                "","C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM",
                                "","M", "MM", "MMM","","","","","",""};
            string str0, str1, str2, str3, str;
            str3 = r[3][num / 1000];
            str2 = r[2][num % 1000 / 100];
            str1 = r[1][num % 1000 % 100 / 10];
            str0 = r[0][num % 1000 % 100 % 10];
            str = str3 + str2 + str1 + str0; 
            return str;
    }
};