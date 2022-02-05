//Matrix Chain Multiplication
//https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1/#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    //Method-1 (Tabulation) (time-O(n^3))
    int matrixMultiplication(int n, int a[])
    {
        // code here
        int dp[n][n];
        for(int i=0;i<n-1;i++)
            dp[i][i+1]=0;
            
        for(int gap=2;gap<n;gap++){
            for(int i=0;i+gap<n;i++){
                int j=i+gap;
                dp[i][j]=INT_MAX;
                
                for(int k=i+1;k<j;k++)
                    dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]+a[i]*a[k]*a[j]);
            }
        }
        
        return dp[0][n-1];
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.matrixMultiplication(N, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends