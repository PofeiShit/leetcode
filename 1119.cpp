class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans;
        int** F = new int*[rowIndex + 1];
        for(int i = 0; i < rowIndex + 1; ++i)
            F[i] = new int[rowIndex + 1];
        if(rowIndex >= 0)
            *(*F) = 1;
        if(rowIndex >= 1){
            *(*(F + 1)) = 1;
            *(*(F + 1) + 1) = 1;
        }
        for(int i = 0; i < rowIndex + 1; ++i){
            vector<int> tmp;
            for(int j = 0; j <= i; ++j){
                if(j == 0 || j == i)
                    *(*(F + i) + j) = 1;
                else {
                    *(*(F + i) + j) = *(*(F + i - 1) + j - 1) + *(*(F + i - 1) + j);
                }
                tmp.push_back(*(*(F + i) + j));
            }
            if(i == rowIndex){
                ans = tmp;
                break;
            }
        }
        return ans;
    }
};