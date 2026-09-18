class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buying_price = prices[0];
        int profit = 0;
        for(int i = 0; i < n; i++){
            int curr_profit = prices[i] - buying_price;
            if(curr_profit > profit){
                profit = curr_profit;
            }
            buying_price = (buying_price < prices[i]) ? buying_price : prices[i];
        }
        return profit;
    }
};