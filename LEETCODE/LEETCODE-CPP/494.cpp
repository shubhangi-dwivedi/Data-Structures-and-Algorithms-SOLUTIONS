//494. Target Sum
//https://leetcode.com/problems/target-sum/

class Solution {
public:

    //METHOD-1 (DP) (SPACE - O(N*X))
    int findTargetSumWays(vector<int>& nums, int target) {

        //logic- count of subset with given difference (same to same)
        int n=nums.size();
        target=abs(target);
        
        int sum=0,x=0;
        for(int i=0;i<n;i++)
            sum+=nums[i];
        
        x=(sum+target)/2;
        
        //imp.
        if(sum<target || (sum+target)%2 !=0) 
            return 0;
        
        int dp[n+1][x+1];
        
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int j=1;j<=x;j++)
            dp[0][j]=0;
        
        int count=0;
        for(int i=0;i<n;i++)
            if(nums[i]==0)
                count++;
        
        for(int i=1;i<=n;i++)
            for(int j=1;j<=x;j++){
                if(nums[i-1]<=j && nums[i-1]!=0)
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-nums[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        
        int y=pow(2,count);
        
        return dp[n][x]*y;
    }
};