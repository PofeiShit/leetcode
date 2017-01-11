class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int c, sz = digits.size(), quo;
        vector<int> ans;
        c = (digits[sz - 1] + 1) / 10;
        quo = (digits[sz - 1] + 1) % 10;
        ans.insert(ans.begin(), quo);
        for(int i = sz - 2; i >= 0; --i){
            quo = (digits[i] + c) % 10;
            c = (digits[i] + c) / 10;
            ans.insert(ans.begin(), quo);
        }
        if(c != 0)
            ans.insert(ans.begin(), c);
        return ans;
    }
};