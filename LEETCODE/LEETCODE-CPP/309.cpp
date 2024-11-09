//309. Best Time to Buy and Sell Stock with Cooldown
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/description/

//Method-1 Recursion
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        return helper(prices, 0, true);
    }

    int helper(vector<int>& prices, int i, bool buy){
        if(i>=prices.size())
            return 0;

        if(buy){
            return max(-prices[i] + helper(prices,i+1,false), helper(prices,i+1,true));
        }
        else 
            return max(prices[i]+helper(prices,i+2,true), helper(prices,i+1,false));
    }
};

//Method-2 DP
class Solution {
public:
    int dp[5005][2];
    int maxProfit(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
    
        return helper(prices, 0, 1);
    }

    int helper(vector<int>& prices, int i, int buy){
        if(i>=prices.size())
            return 0;

        if(dp[i][buy]!=-1)
            return dp[i][buy];
        if(buy){
            return dp[i][buy]=max(-prices[i] + helper(prices,i+1,0), helper(prices,i+1,1));
        }
        else 
            return dp[i][buy]=max(prices[i]+helper(prices,i+2,1), helper(prices,i+1,0));
    }
};