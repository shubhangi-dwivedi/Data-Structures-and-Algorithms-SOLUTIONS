//Minimum number of deletions and insertions


// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	int dp[1001][1001];

	public:

    //using DP (LCS - tabulation)
	int minOperations(string s1, string s2) 
	{ 
	    // Your code goes here
	    memset(dp,0,sizeof(dp));
	    
	    int m=s1.length(),n=s2.length();
	    
	    int x=lcs(s1,s2,m,n); //lcs length
        
        // min. no. of insertion or deletion
        int num_insertion=s2.length()-x;	  
        int num_deletion=s1.length()-x;
        
        return num_insertion+num_deletion;
	} 
	
	int lcs(string s1, string s2, int m, int n){
	    
	    //tabulation    
	    for(int i=1;i<m+1;i++)
	        for(int j=1;j<n+1;j++){
	            if(s1[i-1]==s2[j-1])
	                dp[i][j]=1+dp[i-1][j-1];
	            else
	                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	        }
	        
	   return dp[m][n];
	}
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;

	    Solution ob;
	    cout << ob.minOperations(s1, s2) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends