//121. Best Time to Buy and Sell Stock
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Method-1 using recursion
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        
        if(n==1){
            return profit;
        }
        
        helper(prices,0,1,n,profit);
            
        return profit;
    }
    
    void helper(vector<int>& prices, int i, int j, int n, int &profit){
        if(i>=n || j>=n){
            return;
        }
        
        if(j>i){
            profit=max(profit, prices[j]-prices[i]);
            
            helper(prices, i+1,j,n, profit);
            helper(prices, i, j+1,n, profit);
        }
    }
};

//Method-2
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