//516. Longest Palindromic Subsequence

//Method-1 (tabulation/bottom-up)
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t=s;
        int n=s.length();
        reverse(s.begin(),s.end());
        
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        
        for(int i=0;i<n+1;i++){
            dp[0][i]=0;
            dp[i][0]=0;
        }
        
        for(int i=1;i<n+1;i++)
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        
        
        return dp[n][n];
    }
};

//Method-2 (memoization/top-down)
class Solution {
public:
    int longestPalindromeSubseq(string s) {
        string t=s;
        int n=s.length();
        reverse(s.begin(),s.end());
        
        vector<vector<int>> dp(n+1,vector<int> (n+1,-1));
        
        int ans=sol(dp,s,t,n,n);
        
        return ans;
    }
    
    int sol(vector<vector<int>>&dp, string &s, string &t, int m, int n){
        
        if(m==0 || n==0)
            return dp[m][n]=0;
        
        if(dp[m][n]!=-1)
            return dp[m][n];
        else{
            if(s[m-1]==t[n-1])
                return dp[m][n]=1+sol(dp,s,t,m-1,n-1);
            else
                return dp[m][n]=max(sol(dp,s,t,m,n-1),
                                 sol(dp,s,t,m-1,n));
        }
    }
};