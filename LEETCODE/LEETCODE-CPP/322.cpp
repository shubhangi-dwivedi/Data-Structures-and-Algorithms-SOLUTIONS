//322. Coin Change
//https://leetcode.com/problems/coin-change/

//Method-1 using recursion (TLE)
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        
        int result=helper(coins, amount, 0, n);
        
        return result==INT_MAX ? -1 : result;
    }
    
    int helper(vector<int>& coins, int amount, int i, int n){

        if(amount==0){
            return 0;
        }
        
        if (i >= n || amount < 0) {
            return INT_MAX; 
        }
        
        int same_coin=helper(coins, amount-coins[i], i, n);

        int next_coin=helper(coins, amount, i+1, n);

        
        if(same_coin!=INT_MAX){
            same_coin+=1;
        }
        
        return min(same_coin, next_coin);
    }
};

//Method-2 tabulation (space: O(m*n), time: O(m*n))
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int m=coins.size(),n=amount;
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int j=0;j<n+1;j++)
            dp[0][j]=INT_MAX-1;
        
        for(int i=1;i<m+1;i++)
            dp[i][0]=0;
        
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                dp[i][j]=dp[i-1][j];
                
                if(coins[i-1]<=j)
                    dp[i][j]=min(dp[i][j-coins[i-1]]+1,dp[i-1][j]);
            }
        
        return dp[m][n]!=INT_MAX-1 ? dp[m][n]:-1;
    }
};


//Method-3 DP-tabulation (space: O(amt), time=O(amt*n))
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

//Method-4 DP-Memoization
class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
        vector<vector<int>>dp(n+1,vector<int>(amount+1,-1));
        
        int result = helper(coins,amount,n-1,dp);
        
        return (result<INT_MAX-1)?result:-1;
    }
    
    int helper(vector<int>& coins, int amount,int n, vector<vector<int>> &dp){
        if(amount==0){
            return 0;
        }
        
        if(n<0 || amount<0){
            return INT_MAX-1;
        }
        
        if(dp[n][amount]!=-1){ 
            return dp[n][amount];
        }
        
        int diff_coin = helper(coins,amount,n-1,dp);
        int same_coin = 1+helper(coins,amount-coins[n],n,dp);
        
        return dp[n][amount] = min(diff_coin,same_coin);
                
    }
};