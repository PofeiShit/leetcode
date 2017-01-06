class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len = strs.size(), j = 0;
        string s;
        if(len == 1)
            return strs[0];
        else if(len > 1){
            for(int i = 0, j = 0; i < strs[0].length() || j < strs[1].length(); i++, j++){
                if(strs[0][i] == strs[1][j])
                    s += strs[0][i];
                else 
                    break;
            }
            for(int i = 2; i < len; i++){
                if(strs[i].empty()){
                    s.clear();
                    break;
                } 
                for(j = 0; j < strs[i].length(); j++){
                    if(s[j] != strs[i][j])
                        break;
                }
                s.erase(s.begin() + j, s.end());
            }
        }
        return s;
    }
};