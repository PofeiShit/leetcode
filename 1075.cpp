class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cr = 0, cw = 0, cb = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] == 0)
                ++cr;
            else if(nums[i] == 1)
                ++cw;
            else if(nums[i] == 2)
                ++cb;
        }
        int i;
        for(i = 0; i < cr; ++i)
            nums[i] = 0;
        for(i = cr; i < cr + cw; ++i)
            nums[i] = 1;
        for(i = cr + cw; i < cr + cw + cb; ++i)
            nums[i] = 2;
    }
};