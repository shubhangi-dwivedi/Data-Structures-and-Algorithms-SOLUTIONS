//63. Unique Paths II
//https://leetcode.com/problems/unique-paths-ii/


//Method-1 (dp-tabulation) (using same matrix)
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


//Method-2 (dp-tabulation) (using separate matrix)
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