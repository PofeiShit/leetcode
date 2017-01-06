class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> tmp;
        deque<vector<int>> q;
        int sz = nums.size();
        for(int i = 0; i < sz; ++i){
            if(q.empty()){
                q.push_back({nums[0]}); // 1
            } else {
                int qsz = q.size();
                for(int k = 0; k < qsz; ++k){
                    tmp = q.front(); // 1. 2, 1
                    int len = tmp.size(); // 1, 2
                    for(int j = 0; j <= len; ++j){
                        vector<int>::iterator it = tmp.begin(); 
                        tmp.insert(it + j, nums[i]); // 2, 1. 1, 2. 3, 2, 1. 2, 3, 1. 2, 1, 3.
                        q.push_back(tmp); // 2, 1. 1, 2
                        tmp = q.front(); // 1
                    }
                    q.pop_front();
                }
            }
        }
        sort(q.begin(), q.end());
        return vector<vector<int>>(q.begin(), q.end());
    }
};