class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        string tmp;
        int len;
        len = s.empty() ? 0 : 1;
        for(int i = 0; i < s.length(); i++){
            int pos = tmp.find(s[i], 0);
            if(pos == string::npos){
                tmp += s[i];
            } else {
                len = tmp.length() > len ? tmp.length() : len;
                tmp.erase(tmp.begin(), tmp.begin() + pos + 1);
                tmp += s[i];
               // cout << tmp << endl;
            }
        }
        len = tmp.length() > len ? tmp.length() : len;
        return len;
    }
};