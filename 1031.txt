class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = nums.size();
        int tmp, i, j, num1, num2;
        //最长递减后缀
        for(i = sz - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1])
                break;
        }
        if(i == -1)
            sort(nums.begin(), nums.end());
        else {
            //递减序列中大于num1中的最小元素
            for(j = sz - 1; j > i; j--){
                if(nums[j] > nums[i])
                    break;
            }
            //交换两个元素
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            //将新后缀颠倒，使其变成递增序列
            sort(nums.begin() + i + 1, nums.end());
        }
    }
};