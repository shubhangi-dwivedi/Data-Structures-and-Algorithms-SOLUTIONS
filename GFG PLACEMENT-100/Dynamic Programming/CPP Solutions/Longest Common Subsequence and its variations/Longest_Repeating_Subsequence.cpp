//https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string s1){
		    // Code here
		    int n=s1.length();
		    int dp[n+1][n+1];
		    memset(dp,0,sizeof(dp));
		    string s2=s1;
		    
		    for(int i=1;i<n+1;i++)
		        for(int j=1;j<n+1;j++){
		            if(i!=j && s1[i-1]==s2[j-1])
		                dp[i][j]=1+dp[i-1][j-1];
		            else
		                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
		        }
		        
		       return dp[n][n];
		    
		}

};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}  // } Driver Code Ends