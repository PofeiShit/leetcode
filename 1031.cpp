class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int sz = nums.size();
        int tmp, i, j, num1, num2;
        //��ݼ���׺
        for(i = sz - 2; i >= 0; i--){
            if(nums[i] < nums[i + 1])
                break;
        }
        if(i == -1)
            sort(nums.begin(), nums.end());
        else {
            //�ݼ������д���num1�е���СԪ��
            for(j = sz - 1; j > i; j--){
                if(nums[j] > nums[i])
                    break;
            }
            //��������Ԫ��
            tmp = nums[i];
            nums[i] = nums[j];
            nums[j] = tmp;
            //���º�׺�ߵ���ʹ���ɵ�������
            sort(nums.begin() + i + 1, nums.end());
        }
    }
};