class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        bool minusFlag = false, plusFlag = false;
        int min = 0x7fffffff;
        for(int i = 0; i < nums.size(); i++){
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            int l = i + 1, r = nums.size() - 1;
            while(l < r){
                int sum = nums[i] + nums[l] + nums[r];
                if(sum == target)
                    return target;
                else if(sum > target){
                    if(sum - target < min){
                        min = sum - target;
                        minusFlag = false;
                        plusFlag = true;
                    }
                    while(r > 0 && nums[r] == nums[r - 1]) --r;
                    --r;
                } else if(sum < target){
                    if(target - sum < min){
                        min = target - sum;
                        minusFlag = true;
                        plusFlag = false;
                    }
                    while(l < nums.size() - 1 && nums[l] == nums[l + 1]) ++l;
                    ++l;
                }
            }
        }
        if(plusFlag)
            return target + min;
        return target - min;
    }
};