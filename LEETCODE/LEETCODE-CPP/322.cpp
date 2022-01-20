//322. Coin Change
//https://leetcode.com/problems/coin-change/

//Method-1 tabulation (space: O(m*n), time: O(m*n))
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m=coins.size(),n=amount;
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int j=0;j<n+1;j++)
            dp[0][j]=INT_MAX-1;
        
        for(int i=1;i<m+1;i++)
            dp[i][0]=0;
        
        /*
        for(int j=1;j<n+1;j++){
            if(j%coins[0]==0)
                dp[1][j]=j%coins[0];
            else
                dp[1][j]=INT_MAX-1;
            
        }*/
        
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                dp[i][j]=dp[i-1][j];
                
                if(coins[i-1]<=j)
                    dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            }
        
        return dp[m][n]!=INT_MAX-1 ? dp[m][n]:-1;
    }
};


//Method-2 DP-tabulation (space: O(amt), time=O(amt*n))
class Solution {
public:
    int coinChange(vector<int>& coins, int amt) {
        int n=coins.size();
        vector<int>dp(amt+1,INT_MAX);
        
        dp[0]=0;
        
        for(int i=1;i<=amt;i++)
            for(int j=0;j<n;j++){
                if(coins[j]<=i){
                    int sub_res=dp[i-coins[j]];
                    if(sub_res!=INT_MAX)
                        dp[i]=min(dp[i],sub_res+1);
                }
            }
        
        return dp[amt]==INT_MAX? -1:dp[amt];
    }
};