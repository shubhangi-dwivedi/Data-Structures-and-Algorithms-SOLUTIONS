//Target Sum
//https://practice.geeksforgeeks.org/problems/target-sum-1626326450/1?ref=gcse#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//Back-end complete function Template for C++

class Solution {
  public:

    //Method-1 (DP) (Space- O(N*X))
    int findTargetSumWays(vector<int>&a ,int target) {
        //Your code here
        //Logic- count of subsets with a given difference (same to same)
        int n=a.size();
        int sum=0,x=0;
        
        for(int i=0;i<n;i++)
            sum+=a[i];
            
        if(target>sum || (sum+target)%2!=0)
            return 0;
            
        x=(sum+target)/2;
        int dp[n+1][x+1];
        
        for(int i=0;i<=n;i++)
            dp[i][0]=1;
        for(int j=1;j<=x;j++)
            dp[0][j]=0;
          
        int count=0;
        for(int i=0;i<n;i++)
            if(a[i]==0)
                count++;  
            
        for(int i=1;i<=n;i++)
            for(int j=1;j<=x;j++){
                if(a[i-1]<=j && a[i-1]!=0)
                    dp[i][j]=dp[i-1][j]+dp[i-1][j-a[i-1]];
                else
                    dp[i][j]=dp[i-1][j];
            }
        
        return dp[n][x]*pow(2,count);
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        vector<int>arr(N);
        
        for(int i=0 ; i<N ; i++){
            cin>>arr[i];
        }
        int target;
        cin >> target;

        Solution ob;
        cout<<ob.findTargetSumWays(arr,target);
        cout<<"\n";
    }
    return 0;
}  // } Driver Code Ends