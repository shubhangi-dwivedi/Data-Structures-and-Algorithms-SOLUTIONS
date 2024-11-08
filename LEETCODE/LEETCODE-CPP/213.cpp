//213. House Robber II
//https://leetcode.com/problems/house-robber-ii/description/

//Method-1 Recursion
class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];

        int sum1=helper(nums,0,n-2);
        int sum2=helper(nums,1,n-1);

        return max(sum1,sum2);
    }

    int helper(vector<int>& nums, int start, int n){
        if(n<start)
            return 0;

        int temp2=helper(nums, start, n-2)+nums[n];
        int temp1=helper(nums, start, n-1);

        return max(temp1,temp2);
    }
};

//Method-2 DP
class Solution {
public:
    int dp1[105];
    int dp2[105];

    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)
            return nums[0];

        memset(dp1,-1,sizeof(dp1));
        memset(dp2,-1,sizeof(dp2));

        int sum1=helper(nums,dp1,0,n-2);
        int sum2=helper(nums,dp2,1,n-1);
        cout<<sum1<<","<<sum2;
        return max(sum1,sum2);
    }

    int helper(vector<int>& nums, int dp[], int start, int n){
        if(n<start)
            return 0;
        
        if(dp[n]!=-1)
            return dp[n];
            
        int temp2=helper(nums,dp, start, n-2)+nums[n];
        int temp1=helper(nums,dp, start, n-1);

        return dp[n]=max(temp1,temp2);
    }
};