//1137. N-th Tribonacci Number
//https://leetcode.com/problems/n-th-tribonacci-number/

//Method-1 (dp-tabulation)
class Solution {
public:
    int tribonacci(int n) {
        int dp[n+1];
        memset(dp,0,n+1);
        
        dp[0]=0;
        if(n>=1)
            dp[1]=1;
        if(n>=2)
            dp[2]=1;
        
        for(int i=3;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
        
        return dp[n];
    }
};