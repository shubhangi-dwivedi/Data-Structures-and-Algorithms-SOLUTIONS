//416. Partition Equal Subset Sum
//https://leetcode.com/problems/partition-equal-subset-sum/

//Method-1 (DP - Tabulation)
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum=0,n=nums.size();
        for(int i=0;i<n;i++)
            sum+=nums[i];
        
        if(sum%2==0){
            int new_sum=sum/2;
            int dp[n+1][new_sum+1];
            
            for(int i=0;i<=n;i++)
                dp[i][0]=true;
            for(int j=1;j<=new_sum;j++)
                dp[0][j]=false;
            
            for(int i=1;i<=n;i++)
                for(int j=1;j<=new_sum;j++){
                    if(nums[i-1]>j)
                        dp[i][j]=dp[i-1][j];
                    else
                        dp[i][j]=dp[i-1][j] || dp[i-1][j-nums[i-1]];
                }
            
            return dp[n][new_sum];
        }
        else
            return false;
    }
};