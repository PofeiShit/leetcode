class Solution {
public:
    void Count(vector<int>& nums, int cnt, int& idx, int now){
        if(cnt >= 2){
            nums[idx] = now;
            nums[idx + 1] = now;
            idx += 2;
        } else if(cnt == 1){
            nums[idx] = now;
            ++idx;
        }
    }
    int removeDuplicates(vector<int>& nums) {
        int sz = nums.size();
        int cnt = 0, idx = 0, now;
        for(int i = 0; i < sz; ++i){
            if(i == 0) now = nums[i];
            if(nums[i] == now){
                ++cnt;
            } else {
                Count(nums, cnt, idx, now);
                cnt = 1;
                now = nums[i];
            }
        }
        Count(nums, cnt, idx, now);
        return idx;
    }
};