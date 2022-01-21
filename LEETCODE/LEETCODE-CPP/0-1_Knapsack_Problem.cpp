//0 - 1 Knapsack Problem
//https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:

    //METHOD-1 (DP solution) (Time- O(nW))
    //Function to return max value that can be put in knapsack of capacity W.
    int knapSack(int W, int wt[], int val[], int n) 
    { 
       // Your code here
       int dp[n+1][W+1];
       
        for(int i=0;i<=W;i++)
           dp[0][i]=0;
        for(int i=0;i<=n;i++)
            dp[i][0]=0;
            
        for(int i=1;i<=n;i++)
            for(int j=1;j<=W;j++){
                if(wt[i-1]>j)
                    dp[i][j]=dp[i-1][j];
                else
                    dp[i][j]=max(dp[i-1][j], val[i-1]+dp[i-1][j-wt[i-1]]);
            }
            
        return dp[n][W];
    }
};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends