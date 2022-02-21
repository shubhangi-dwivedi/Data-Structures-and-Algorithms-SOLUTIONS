//70. Climbing Stairs
//https://leetcode.com/problems/climbing-stairs/

//Method-1 (recursion) (TLE)
class Solution {
public:
    int climbStairs(int n) {
        
        if(n==0)
            return 1;
        
        if(n<0)
            return 0;
        
        int ans= climbStairs(n-1)+climbStairs(n-2);
        
        return ans;
        
    }
};

//Method-2 (memoization)
class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        
        int res=calc(dp,n);
        
        return res;
    }
    
    int calc(int dp[], int n){
        if(n==0)
            return 1;
        
        if(n<0)
            return 0;
        
        if(dp[n]!=0)
            return dp[n];
        
        dp[n]= calc(dp,n-1)+calc(dp,n-2);
        
        return dp[n];
    }
};


//Method-3 (dp-tabulation)
class Solution {
public:
    int climbStairs(int n) {
        int dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];
        
        return dp[n];
    }
};