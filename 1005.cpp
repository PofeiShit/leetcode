class Solution {
public:
    string longestPalindrome(string s) {
        const int len = 1010;
        int dp[len][len];
        int max = 1;
        string tmp;
        tmp += s[0];
        memset(dp, 0, sizeof(dp));
        
        for(int i = 0; i < s.length(); i++){
            dp[i][i] = 1;
            if(i < s.length() - 1 && s[i] == s[i + 1]){
                tmp.assign(s.begin() + i, s.begin() + i + 2);
                dp[i][i + 1] = 1;
                max = 2;
            }
        }
     
        for(int L = 3; L <= s.length(); L++){
            for(int i = 0; i + L - 1 < s.length(); i++){
                int j = i + L - 1;
                if(s[i] == s[j]){
                    dp[i][j] = dp[i + 1][j - 1];
                    if(dp[i][j] == 1 && j - i + 1 > max){
                        max = j - i + 1;
                        tmp.clear();
                        tmp.append(s.begin() + i, s.begin() + j + 1);
                    }
                }

            }
        }
        return tmp;
    }
};