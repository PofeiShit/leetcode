class Solution {
public:
    int romanToInt(string s) {
       // char ch[] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
       map<char, int> m;
       m['I'] = 1; m['V'] = 5; m['X'] = 10; m['L'] = 50; m['C'] = 100; m['D'] = 500; m['M'] = 1000;
        int tmp = 0, ans = 0;
        for(int i = 0; i < s.length(); ){
            if(m[s[i]] < m[s[i + 1]]){
                tmp = (m[s[i + 1]]) - (m[s[i]]);
                i += 2;
            } else {
                tmp = m[s[i]];
                i++;
            }
            ans += tmp;
        }
        return ans;
    }
};