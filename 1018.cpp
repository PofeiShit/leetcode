class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        set<vector<int>> res;
        if(nums.empty())
            return vector<vector<int>>(res.begin(), res.end());
        for(int i = 0; i < nums.size() - 1; i++){
            for(int j = i + 1; j < nums.size(); j++){
                int l = j + 1, r = nums.size() - 1;
                while(l < r){
                    if(nums[i] + nums[j] + nums[l] + nums[r] == target){
                        res.insert({nums[i],nums[j],nums[l],nums[r]});
                        while(l < r && nums[l] == nums[l + 1]) ++l;
                        while(l < r && nums[r] == nums[r - 1]) --r;
                        ++l;
                        --r;
                    } else if(nums[i] + nums[j] + nums[l] + nums[r] < target)
                        ++l;
                    else --r;
                }
            }
        }
        return vector<vector<int>>(res.begin(), res.end());
    }
};