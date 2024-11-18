//62. Unique Paths
//https://leetcode.com/problems/unique-paths/

//Method-1 Brute force recursion
class Solution {
public:
    
    int uniquePaths(int m, int n) {
        int paths=0;
        helper(m-1,n-1,paths,0,0);

        return paths;
    }

    void helper(int m, int n, int &paths, int i,int j){
        if(i==m && j==n){
            paths++;
            return;
        }
        
        if(i<m)
            helper(m,n,paths,i+1,j);
        if(j<n)
        helper(m,n,paths,i,j+1);
    }
};


//Method-2 (dp-tabulation)
class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp (m,vector<int>(n,-1));
        
        for(int i=0;i<m;i++)
            dp[i][0]=1;
        for(int i=0;i<n;i++)
            dp[0][i]=1;
        
        int res=0;
        for(int i=1;i<m;i++)
            for(int j=1;j<n;j++)
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            
        return dp[m-1][n-1];
        
    }
};


//Method-3 (dp-memoization)
class Solution {
public:
    
    int dp[101][101];
    
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        int res= calc(0,0,m-1,n-1);
        return res;
    }
    
    int calc(int i, int j, int m, int n){
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(i==m & j==n)
            return 1;
        else{
            int r=0,d=0;
            if(i<m)
                r=calc(i+1,j,m,n);
            if(j<n)
                d=calc(i,j+1,m,n);
            
            return dp[i][j]=r+d;
        }
    }
};
