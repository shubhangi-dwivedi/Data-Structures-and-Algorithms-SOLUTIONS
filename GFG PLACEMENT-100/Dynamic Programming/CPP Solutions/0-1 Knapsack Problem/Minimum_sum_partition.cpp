//Minimum sum partition
//https://practice.geeksforgeeks.org/problems/minimum-sum-partition3317/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

//Method-1 DP (space- n*range)
  public:
  vector<int> v;
void sub(int arr[],int n,int range)
 {
    // subset sum logic & equal sum partition
    bool dp[n+1][range+1];
     for(int i=0;i<=n;i++)
     {
         for(int j=0;j<=range;j++)
         {
             if(i==0)
             dp[i][j]=0;
             if(j==0)
             dp[i][j]=1;
         }
     }
     for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=range;j++)
        {
            if(arr[i-1]>j)
            {
              dp[i][j]=dp[i-1][j];
            }
            else
            dp[i][j]=dp[i-1][j]||dp[i-1][j-arr[i-1]];
        }
    }

    //storing valid sums 
    for(int j=0;j<=range/2;j++)
    {
       if(dp[n][j]==true)
            v.push_back(j);
    }
 }
             
                
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	   int range=0;
        for(int i=0;i<n;i++)
        {
            range+=arr[i];
        }
        sub(arr,n,range);

        //finding min. diiference
        int mn=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            if(range-2*v[i]<mn)
                mn=range-2*v[i];
        }
        
    return mn;
	} 

};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends