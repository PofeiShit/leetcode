class Solution {
public:
    int lengthOfLastWord(string s) {
        int len = 0, sz = s.length(), tmp = 0;
        for(int i = 0; i < sz; ++i){
            if(s[i] == ' ' && tmp != 0){
                len = tmp;
                tmp = 0;
            } else if(s[i] != ' ') 
                ++tmp;
        }
        if(tmp != 0) len = tmp;
        return len;
    }
};