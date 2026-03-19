# 121. Best Time to Buy and Sell Stock
# https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

#Method-1 using one pass
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        min_price=prices[0]
        max_profit=0

        for i in range(1,len(prices)):
            min_price=min(min_price,prices[i])
            
            if prices[i]-min_price>max_profit:
                max_profit=prices[i]-min_price

        return max_profit
