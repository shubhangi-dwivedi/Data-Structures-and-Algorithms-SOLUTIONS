//121. Best Time to Buy and Sell Stock

class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int min_price=prices[0], max_profit=0;
        
        for(int i=0 ; i<prices.size(); i++)
        {
            min_price=min(min_price,prices[i]);
            if(prices[i] - min_price > max_profit)
                max_profit = prices[i] - min_price;
        }
        
        return max_profit;
    }
};