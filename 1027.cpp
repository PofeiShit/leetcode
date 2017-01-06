class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int sz = nums.size(), len = 0, leftpos = 0;
        if(sz == 0)
            return sz;
        else {
            for(int i = 0; i < sz; i++){
                if(nums[i] == val)
                    continue;
                else {
                    nums[leftpos] = nums[i];
                    leftpos++;
                    len++;
                }
            }
        }
        return len;
    }
};