class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = haystack.length();
        int len2 = needle.length();
        string tmp;
        for(int i = 0; i <= len1 - len2; i++){
            tmp.assign(haystack.begin() + i, haystack.begin() + i + len2);
            if(tmp == needle)
                return i;
        }
        return -1;
    }
};