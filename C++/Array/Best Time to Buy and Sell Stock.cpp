class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n = prices.size();
        int maxRight = prices[n-1];
        int maxProfit = 0;
        for(int i = n - 2; i >= 0; i--){
            maxRight = max(prices[i], maxRight);
            maxProfit = max(maxProfit, maxRight - prices[i]);
        }
        
        return maxProfit;
        
    }
};
