class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int min_value = prices[0];
        for(int i=0; i<n; i++){
            max_profit = max(max_profit, prices[i]-min_value);
            min_value = min(min_value, prices[i]);
        }
        return max_profit;
    }
};
