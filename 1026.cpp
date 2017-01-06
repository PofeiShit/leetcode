class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size(), len = 1, leftpos = 1;
        if(sz <= 1)
            return sz;
        else {
            for(int i = 1; i < sz; i++){
                if(nums[i] == nums[i - 1]){
                    continue;
                } else {
                    nums[leftpos] = nums[i];
                    leftpos++;
                    len++;
                }
            }
        }
        return len;
    }
};