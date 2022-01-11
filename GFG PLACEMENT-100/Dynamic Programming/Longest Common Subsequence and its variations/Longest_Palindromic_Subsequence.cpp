// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    int longestPalinSubseq(string s) {
        //code here
        int n=s.length();
        
        string t=s;
        reverse(s.begin(),s.end());
        
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        
        int x=lcs(dp,s,t,n,n);
        
        return x;
    }
    
    //method-1 memoization
    int lcs(vector<vector<int>> &dp,string &s, string &t, int m, int n){
        if(m==0 || n==0)
            return 0;
        if(dp[m][n]!=-1)
            return dp[m][n];
            
        if(s[m-1]==t[n-1]){
            dp[m][n]=1+lcs(dp,s,t,m-1,n-1);
            
        }
        else
            dp[m][n]=max(lcs(dp,s,t,m-1,n),lcs(dp,s,t,m,n-1));
            
        return dp[m][n];
    }
    
    //method-2 tabulation
    int lcs(vector<vector<int>> &dp,string &s, string &t, int m, int n){
    
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

// { Driver Code Starts.

int32_t main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout << ob.longestPalinSubseq(s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends