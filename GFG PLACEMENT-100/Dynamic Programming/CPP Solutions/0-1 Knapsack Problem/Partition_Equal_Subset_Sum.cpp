//Partition Equal Subset Sum
//https://practice.geeksforgeeks.org/problems/subset-sum-problem2014/1#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

    //Methos-1 (DP - Tabulation)
    int equalPartition(int n, int arr[])
    {
        // code here
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=arr[i];
            
        if(sum%2==0){
            
            //subset sum solution
            int new_sum=sum/2;
            bool dp[n+1][new_sum+1];
            
            for(int i=0;i<=n;i++)
                dp[i][0]=true;
            for(int i=1;i<=new_sum;i++)
                dp[0][i]=false;
                
            for(int i=1;i<=n;i++)
                for(int j=1;j<=new_sum;j++){
                    if(arr[i-1]>j)
                        dp[i][j]=dp[i-1][j];
                    else
                        dp[i][j]=dp[i-1][j-arr[i-1]] || dp[i-1][j];
                }
                
            return dp[n][new_sum];
        }
        else
            return false;
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
        if(ob.equalPartition(N, arr))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}  // } Driver Code Ends