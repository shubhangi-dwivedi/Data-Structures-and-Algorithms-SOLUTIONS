//Minimum Insertion Steps to Make a String Palindrome

class Solution {
public:
    int minInsertions(string s) {

        //logic same as minimum no. of deletion to make a string palindrome
        int n=s.length();
        
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        
        string t=s;
        reverse(s.begin(),s.end());
        
        int x=lcs(dp,s,t,n,n);
        
        return n-x;
    }
    
    //tabulation
    int lcs(vector<vector<int>>& dp, string s, string t, int m, int n){
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        
        return dp[m][n];
    }
};