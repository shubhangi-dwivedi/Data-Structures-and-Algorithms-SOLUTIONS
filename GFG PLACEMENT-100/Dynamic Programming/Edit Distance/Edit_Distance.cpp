//Edit Distance 
//https://practice.geeksforgeeks.org/problems/edit-distance3702/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:

    //Method -1 Tabulation
    int editDistance(string s, string t) {
        // Code here
        int m=s.length();
        int n=t.length();
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int i=0;i<m+1;i++)
            dp[i][0]=i;
            
        for(int j=0;j<n+1;j++)
            dp[0][j]=j;
            
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=1+min(dp[i][j-1],min(dp[i-1][j],dp[i-1][j-1]));
            }
            
        return dp[m][n];
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, t;
        cin >> s >> t;
        Solution ob;
        int ans = ob.editDistance(s, t);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends