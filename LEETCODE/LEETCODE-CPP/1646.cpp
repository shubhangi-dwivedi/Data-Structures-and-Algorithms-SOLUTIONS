//1646. Get Maximum in Generated Array
//https://leetcode.com/problems/get-maximum-in-generated-array/

//Method-1 (dp-tabulation)
class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n==0)
            return 0;
        
        int dp[n+1];
        
        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<n+1;i++){
            int x=i/2;
            
            if(i%2==0)
                dp[i]=dp[x];
            else
                dp[i]=dp[x]+dp[x+1];
        }
        
        return *max_element(dp,dp+(n+1));
    }
};