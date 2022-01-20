//Maximum sum increasing subsequence
//https://practice.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:
    //Method-1 (DP solution (Time- O(n*n))
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    vector<int> lis(n);
	    lis[0]=arr[0];
	    
	    for(int i=1;i<n;i++){
	        lis[i]=arr[i];
	        
	        for(int j=0;j<i;j++)
	            if(arr[j]<arr[i])
	                lis[i]=max(lis[i],arr[i]+lis[j]);
	    }
	    
	    int res=lis[0];
	    for(int i=1;i<n;i++)
	        res=max(res,lis[i]);
        
        return res;
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
	    cout << ob.maxSumIS(a, n) << "\n";
	     
    }
    return 0;
}

  // } Driver Code Ends