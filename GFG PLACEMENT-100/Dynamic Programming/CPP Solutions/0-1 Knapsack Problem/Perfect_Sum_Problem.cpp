//Perfect Sum Problem
//https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
    //Mathod-1 (DP -tabulation)
	int perfectSum(int arr[], int n, int sum)
	{
        // Your code goes here

        //similar to subset sum solution
        int dp[n+1][sum+1];
        int m=pow(10,9)+7;
        int count_0=0;
        
        for(int i=0;i<n;i++)
            if(arr[i]==0)
                count_0++;
        
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int j=1;j<=sum;j++)
            dp[0][j]=0;
            
        for(int i=1;i<=n;i++)
            for(int j=1;j<=sum;j++){
                if(arr[i-1]<=j && arr[i-1]!=0)
                    dp[i][j]=(dp[i-1][j-arr[i-1]]+dp[i-1][j])%m;
                else
                    dp[i][j]=dp[i-1][j];
            }
        
        //For handling 0's in subset ..bcz extra subsets will be formed
        return dp[n][sum]*pow(2,count_0);
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends