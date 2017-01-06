class Solution {
public:
    string convert(string s, int numRows) {
        int cnt = 0, row = 0, i;
        string str;
        if(numRows == 1 || s.length() == 0)
            return s;
        while(cnt != s.length() ){
            if(0 == row || row == numRows - 1){
                for(i = row; i < s.length(); i += (numRows - 1) * 2){
                    str += s[i];
                    cnt++;
                }
            } else {
                for(int start = row + (numRows - row) * 2 - 2, i = row; i < s.length() || start < s.length(); ){
                    if(i < s.length()){
                        str += s[i];
                        cnt++;
                        i += (numRows - 1) * 2;
                    }
                    if(start < s.length()){
                        str += s[start];
                        cnt++;
                        start += (numRows - 1) * 2;
                    }
                }
            }
            row++;
        }
        return str;
    }
};