class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int sz = nums.size();
        int now, next; 
        for(int i = 0; i < sz; i++){
            if(i + 1 != nums[i] && nums[i] > 0){//
                now = nums[i];
                while(now - 1 >= 0 && now - 1 < sz && nums[now - 1] != now){
                    next = nums[now - 1]; //把目标先存起来
                    nums[now - 1] = now; //改变目标值
                    now = next; //下一个
                }
            }
        }
        for(int i = 0; i < sz; i++){
            if(nums[i] != i + 1)
                return i + 1;
        }
        return sz + 1;
    }
};