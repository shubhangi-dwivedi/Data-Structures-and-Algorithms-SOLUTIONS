//118. Pascal's Triangle
//https://leetcode.com/problems/pascals-triangle/

//Method-1 (dp-tabulation)
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n=numRows;
        vector<vector<int>> dp(n);
        
        for(int i=0;i<n;i++){
            dp[i].resize(i+1); //ith row have i+1 elements
            
            dp[i][0]=1;
            dp[i][i]=1;
            
            //will start from i=2 i.e. 3rd row
            for(int j=1;j<i;j++){
              dp[i][j]=dp[i-1][j-1]+dp[i-1][j];  
            }
        }
            
        return dp;
    }
};