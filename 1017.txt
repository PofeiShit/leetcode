class Solution {
public:
    vector<string> letterCombinations(string digits) {
        char table[10][5] = {"","","abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string a, b, tmp;
        vector<string> v, cv;
        if(digits.empty())
            return v;
        a = table[digits[0] - '0'];
        for(int i = 0; i < a.length(); i++)
            v.push_back(a.substr(i, 1));
        for(int i = 1; i < digits.length(); i++){
            a = table[digits[i] - '0'];
            cv.clear();
            cv = v;
            v.clear();
            for(int m = 0; m < cv.size(); m++){
                for(int n = 0; n < a.length(); n++){
                    b = cv[m] + a[n];
                    v.push_back(b);
                }
            }
        }
        return v;
    }
};