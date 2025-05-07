//64. Minimum Path Sum
//https://leetcode.com/problems/minimum-path-sum/

//Method-1 (dp-memoization)
class Solution {
    public int minPathSum(int[][] grid) {
        int m=grid.length, n=grid[0].length;
        int[][] dp= new int[m][n];

        for(int[] r:dp){
            Arrays.fill(r,-1);
        }

        return helper(grid, dp, 0, 0, m, n);
    }

    public int helper(int[][] grid, int[][] dp, int i, int j , int m, int n){
        if(i>=m||j>=n){
            return Integer.MAX_VALUE;
        }

        if(i==m-1 && j==n-1){
            return grid[i][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int sum1=0;
        sum1=helper(grid,dp,i+1,j,m,n);

        int sum2=0;
        sum2=helper(grid,dp,i,j+1,m,n);

        return dp[i][j]=grid[i][j]+Math.min(sum1,sum2);
    }
}