//64. Minimum Path Sum
//https://leetcode.com/problems/minimum-path-sum/

//Method-1 Recursion
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();

        return helper(grid,n,m,0,0);
    }

    int helper(vector<vector<int>> &grid, int n, int m, int i, int j){
        if(i>=n || j>=m){
            return INT_MAX;
        }

        if(i==n-1 &&j==m-1){
            return grid[i][j];
        }

        int r=0,d=0;
        d=helper(grid,n,m,i+1,j);
        r=helper(grid,n,m,i,j+1);

        return grid[i][j]+ min(r,d);
    }
};


//Method-2 (dp-memoization)
class Solution {
public:
    int dp[201][201];
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size(), m=grid[0].size();
        memset(dp,-1,sizeof(dp));
        
        return helper(grid,n,m,0,0);
    }

    int helper(vector<vector<int>> &grid, int n, int m, int i, int j){
        if(i>=n || j>=m){
            return INT_MAX;
        }

        if(i==n-1 &&j==m-1){
            return dp[i][j]=grid[i][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int r=0,d=0;
        d=helper(grid,n,m,i+1,j);
        r=helper(grid,n,m,i,j+1);

        return dp[i][j]=grid[i][j]+ min(r,d);
    }
};

//Method-3 (dp-tabulation)
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,0));
        
        dp[0][0]=grid[0][0];
        for(int i=1;i<r;i++)
            dp[i][0]=grid[i][0]+dp[i-1][0];
        for(int j=1;j<c;j++)
            dp[0][j]=grid[0][j]+dp[0][j-1];
        
        for(int i=1;i<r;i++)
            for(int j=1;j<c;j++)
                    dp[i][j]=grid[i][j]+min(dp[i-1][j],dp[i][j-1]);
            
        
        return dp[r-1][c-1];
    }
};