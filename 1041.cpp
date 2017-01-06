class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int sz = nums.size();
        int now, next; 
        for(int i = 0; i < sz; i++){
            if(i + 1 != nums[i] && nums[i] > 0){//
                now = nums[i];
                while(now - 1 >= 0 && now - 1 < sz && nums[now - 1] != now){
                    next = nums[now - 1]; //��Ŀ���ȴ�����
                    nums[now - 1] = now; //�ı�Ŀ��ֵ
                    now = next; //��һ��
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