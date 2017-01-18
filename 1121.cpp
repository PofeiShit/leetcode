class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int tmpsum = 0, maxsum = 0;
        if(size == 0) return maxsum;
        int *F = new int[size - 1];
        for(int i = 1; i < size; ++i)
            F[i - 1] = prices[i] - prices[i - 1];

        for(int i = 0; i < size - 1; ++i){
            tmpsum += F[i];
            if(tmpsum < 0)
                tmpsum = 0;
            else {
                if(tmpsum > maxsum)
                    maxsum = tmpsum;
            }
        }
        return maxsum;
    }
};