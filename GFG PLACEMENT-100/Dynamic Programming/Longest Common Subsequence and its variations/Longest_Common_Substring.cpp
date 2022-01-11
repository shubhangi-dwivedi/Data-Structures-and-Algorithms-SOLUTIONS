//https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    public:
    int dp[1001][1001];
    int ans;
    
    //Method-1 (Memoization)
    int calc( string &s1, string &s2, int n, int m){
        if(n==0 || m==0)
            return 0;
        
        if(dp[n][m]!=-1)
            return dp[n][m];
        
        calc(s1,s2,n,m-1);
        calc(s1,s2,n-1,m);
            
        if(s1[n-1]==s2[m-1]){
                int x=1+calc(s1,s2,n-1,m-1);
                ans=max(ans,x);
                return dp[n][m]=x;
        }
        
        return dp[n][m]=0;
    }
    
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        memset(dp,-1,sizeof(dp));
        ans=0;
        
        calc(S1,S2,n,m);
        
        //int length=0;
        //for(int i=1;i<n+1;i++)
          //  for(int j=1;i<m+1;j++)
            //    length=max(length,dp[i][j]);
                
        return ans;
    }//memoization end
    

    //Methos-2 (Tabulation)
    int longestCommonSubstr (string S1, string S2, int n, int m)
    {
        // your code here
        memset(dp,0,sizeof(dp));
        ans=0;
        
        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(S1[i-1]==S2[j-1]){
                    int x=1+dp[i-1][j-1];
                    ans=max(ans,x);
                    dp[i][j]=x;
                }
                else
                    dp[i][j]=0;
            }
        }
                
        return ans;
    }//Tabulation

};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n, m; cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        Solution ob;

        cout << ob.longestCommonSubstr (s1, s2, n, m) << endl;
    }
}