class Solution {
public:
    int jump(vector<int>& nums) {
        int nowIdx = 0, lastIdx = nums.size() - 1, cnt = 0, min = 0x7fffffff, idx;
        while(nowIdx < lastIdx){
            min = lastIdx - (nowIdx + nums[nowIdx]);
            idx += nums[nowIdx];

            if(min <= 0)
                return ++cnt;
            for(int i = nowIdx + 1; i <= nowIdx + nums[nowIdx] && i < lastIdx; ++i){
                if(lastIdx - (i + nums[i]) < min){
                    min = lastIdx - (i + nums[i]);
                    idx = i;
                }
            }
            ++cnt;
            nowIdx = idx;
        }
        return cnt;
    }
};