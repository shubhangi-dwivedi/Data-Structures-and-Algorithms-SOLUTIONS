//Minimum number of jumps
//https://practice.geeksforgeeks.org/problems/minimum-number-of-jumps4102/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:

    //Method-1 (Recursive approach) -----TLE-----
    //Function to find minimum number of jumps to reach the end of the array.
    int minimumJumps(int arr[], int n){
        // your code here
        if(n==1)
            return 0;
        
        int res=INT_MAX;
        for(int i=0;i<=n-2;i++)
            if(i+arr[i]>=n-1){
                int sub_res=minimumJumps(arr,i+1);
                if(sub_res!=INT_MAX)
                    res=min(res,sub_res+1);
            }
        
        return res;
    }


    //METHOD-2 (DP solution) -----TLE-----
    //time=O(n*n)    space=O(n)
    int minimumJumps(int arr[], int n){
        // your code here
        vector<int> dp(n,INT_MAX);
        dp[0]=0;
        
        for(int i=1;i<n;i++)
            for(int j=0;j<i;j++)
                if(j+arr[j]>=i)
                    if(dp[j]!=INT_MAX)
                        dp[i]=min(dp[i],dp[j]+1);
                        
        return dp[n-1]==INT_MAX? -1:dp[n-1];
    }
};

// { Driver Code Starts.
int main()
{
    //taking count of testcases
    int t;
    cin>>t;
    while(t--)
    {
        
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.minimumJumps(arr, n)<<endl;    // Function to calculate minimum number of jumps
    }
    return 0;
}  // } Driver Code Ends