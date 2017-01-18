class Solution {
public:
    bool isPalindrome(string s) {
        int size = s.length();
        if(s.empty()) return true;
        for(int l = 0, r = size - 1; l <= r; ){
            if(isalnum(s[l]) && isalnum(s[r])){
                if(tolower(s[l]) != tolower(s[r]))
                    return false;
                ++l; --r;
            } else if(isalnum(s[l]))
                --r;
            else if(isalnum(s[r]))
                ++l;
            else {
                ++l; --r;
            }
        }
        return true;
    }
};