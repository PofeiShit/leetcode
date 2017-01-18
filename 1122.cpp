class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int size = prices.size();
        int *F = new int[size];
        F[0] = 0;
        for(int i = 1; i < size; ++i){
            int price = prices[i] - prices[i - 1];
            if(price < 0)
                F[i] = F[i - 1];
            else 
                F[i] = F[i - 1] + price;
        }
        return F[size - 1];
    }
};