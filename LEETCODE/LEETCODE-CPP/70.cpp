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