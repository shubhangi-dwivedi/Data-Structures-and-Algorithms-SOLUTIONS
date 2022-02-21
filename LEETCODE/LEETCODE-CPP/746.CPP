//746. Min Cost Climbing Stairs
//https://leetcode.com/problems/min-cost-climbing-stairs/


//Method-1 (dp-tabulation)
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[n+1];
        memset(dp,0,n+1);
        
        for(int i=2;i<=n;i++)
            dp[i]=min(cost[i-1]+dp[i-1], cost[i-2]+dp[i-2]);
        
        return dp[n];
    }
};