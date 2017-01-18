class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int** F = new int*[numRows];
        for(int i = 0; i < numRows; ++i)
            F[i] = new int[numRows];
        if(numRows > 0)
            *(*F) = 1;
        if(numRows > 1){
            *(*(F + 1)) = 1;
            *(*(F + 1) + 1) = 1;
        }
        for(int i = 0; i < numRows; ++i){
            vector<int> tmp;
            for(int j = 0; j <= i; ++j){
                if(j == 0 || j == i)
                    *(*(F + i) + j) = 1;
                else {
                    *(*(F + i) + j) = *(*(F + i - 1) + j - 1) + *(*(F + i - 1) + j);
                }
                tmp.push_back(*(*(F + i) + j));
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};