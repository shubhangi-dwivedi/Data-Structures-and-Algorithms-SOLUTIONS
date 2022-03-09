//119. Pascal's Triangle II
//https://leetcode.com/problems/pascals-triangle-ii/

//Method-1 (dp-tabulation)  (time : O(n^2))
class Solution {
public:
    vector<int> getRow(int rowIndex) {
     int n=rowIndex;
        vector<vector<int>> dp(n+1);
        
        for(int i=0;i<n+1;i++){
            dp[i].resize(i+1); 
            
            dp[i][0]=1;
            dp[i][i]=1;
            
            for(int j=1;j<i;j++){
              dp[i][j]=dp[i-1][j-1]+dp[i-1][j];  
            }
        }
        
        return dp[n];
    }
};

//Method-2 (dp-tabulation)  (optimized)