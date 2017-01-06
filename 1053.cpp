class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = 0, maxsum, sz = nums.size();
        maxsum = nums[0];
        for(int i = 0; i < sz; ++i){
            cursum += nums[i];
            if(cursum > maxsum)
                maxsum = cursum;
            if(cursum < 0){
                cursum = 0;
            } 
        }
        return maxsum;
    }
};
