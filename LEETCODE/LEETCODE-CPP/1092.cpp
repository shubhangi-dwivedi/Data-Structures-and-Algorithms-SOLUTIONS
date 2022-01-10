//1092. Shortest Common Supersequence

//Tabulation
//logic : LCS + printing of LCS
class Solution {
public:
    
    string shortestCommonSupersequence(string str1, string str2) {
        int m=str1.length(), n=str2.length();
        
        int dp[m+1][n+1];
        memset(dp,-1,sizeof(dp));
        
        for(int i=0;i<n+1;i++)
            dp[0][i]=0;
        for(int i=0;i<m+1;i++)
            dp[i][0]=0;
        
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                if(str1[i-1]==str2[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                    
                else
                    dp[i][j]=max(dp[i-1][j], dp[i][j-1]);
            }
        
        string res;
        int i=m,j=n;
        
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                res.push_back(str1[i-1]);
                i--,j--;
            }
            else{
                if(dp[i-1][j]>dp[i][j-1]){
                    res.push_back(str1[i-1]);
                    i--;
                }
                else{
                    res.push_back(str2[j-1]);
                    j--;
                }
            }
        }
        
        while(i>0){
            res.push_back(str1[i-1]);
            i--;
        }
        
        while(j>0){
            res.push_back(str2[j-1]);
            j--;
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};