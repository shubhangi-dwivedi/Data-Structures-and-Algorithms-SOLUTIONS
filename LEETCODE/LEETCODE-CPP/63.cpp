//63. Unique Paths II
//https://leetcode.com/problems/unique-paths-ii/

//Method-1 Recursion
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(),m=obstacleGrid[0].size();
        int paths=0;

        helper(obstacleGrid,n,m,0,0,paths);
        return paths;
    }

    void helper(vector<vector<int>>& obstacleGrid, int n, int m, int i ,int j, int &paths){
        if (i>=n || j>=m || obstacleGrid[i][j] == 1) {
            return;
        }

        if(i==n-1 && j==m-1 && obstacleGrid[i][j]!=1){
            paths++;
            return;
        }

        helper(obstacleGrid,n,m,i+1,j,paths);
        helper(obstacleGrid,n,m,i,j+1,paths);
        
    }
};


//Method-2 using dp-memoization
class Solution {
public:
    int dp[101][101];
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size(),m=obstacleGrid[0].size();
        memset(dp,-1,sizeof(dp));

        return helper(obstacleGrid,n,m,0,0);
    }

    int helper(vector<vector<int>>& obstacleGrid, int n, int m, int i ,int j){
        if (i>=n || j>=m || obstacleGrid[i][j] == 1) {
            return 0;
        }

        if(i==n-1 && j==m-1 && obstacleGrid[i][j]!=1){
            return 1;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int d=0,r=0;
        d=helper(obstacleGrid,n,m,i+1,j);
        r=helper(obstacleGrid,n,m,i,j+1);
        
        return dp[i][j]=r+d;
    }
};


//Method-3 (dp-tabulation) (using same matrix)
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs_grid) {
        int r=obs_grid.size();
        int c=obs_grid[0].size();
        
        if(obs_grid[0][0]==1)
            return 0;
        
        obs_grid[0][0]=1;
        
        for(int i=1;i<r;i++)
            if(obs_grid[i-1][0]==1 && obs_grid[i][0]==0)
                obs_grid[i][0]=1;
            else
                obs_grid[i][0]=0;

        
        for(int j=1;j<c;j++)
            if(obs_grid[0][j-1]==1 && obs_grid[0][j]==0)
                obs_grid[0][j]=1;
            else
                obs_grid[0][j]=0;
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++)
                if(obs_grid[i][j]==0)
                    obs_grid[i][j]=obs_grid[i-1][j]+obs_grid[i][j-1];
                else
                    obs_grid[i][j]=0;
        }
        
        return obs_grid[r-1][c-1];
    }
};


//Method-4 (dp-tabulation) (using separate matrix)
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obs_grid) {
        int r=obs_grid.size();
        int c=obs_grid[0].size();
        vector<vector<int>>dp(r,vector<int>(c,0));
        
        if(obs_grid[0][0]==1)
            return 0;
        
        dp[0][0]=1;
        
        for(int i=1;i<r;i++)
            if(obs_grid[i][0]==0)
                dp[i][0]=1;
            else
                break;
        
        for(int j=1;j<c;j++){
            if(obs_grid[0][j]==0)
                dp[0][j]=1;
            else
                break;
        }
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(obs_grid[i][j]==0)
                    dp[i][j]=dp[i-1][j]+dp[i][j-1];
                else
                    dp[i][j]=0;
            }
        }
        
        return dp[r-1][c-1];
    }
};