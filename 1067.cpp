class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0, quo = 0, i, j;
        string ans;
        for(i = a.length() - 1, j = b.length() - 1; i >= 0 || j >= 0; --i, --j){
            if(i >= 0 && j >= 0){
                quo = (a[i] - '0' + b[j] - '0' + c) % 2;
                c = (a[i] - '0' + b[j] - '0' + c) / 2;
            } else if(i >= 0){
                quo = (a[i] - '0' + c) % 2;
                c = (a[i] - '0' + c) / 2;
            } else if(j >= 0){
                quo = (b[j] - '0' + c) % 2;
                c = (b[j] - '0' + c) / 2;
            }
            ans.insert(ans.begin(), (quo + '0'));
        }
       // cout << c << endl;
        if(c != 0)
            ans.insert(ans.begin(), (c + '0'));
        return ans;
    }
};