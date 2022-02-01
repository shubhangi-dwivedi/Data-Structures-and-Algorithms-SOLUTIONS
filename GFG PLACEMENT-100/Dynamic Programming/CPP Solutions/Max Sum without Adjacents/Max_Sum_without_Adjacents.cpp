//Max Sum without Adjacents
//https://practice.geeksforgeeks.org/viewSol.php?subId=a1aa4e56362c4a681fbc9b41a7cb7b63&pid=703083&user=iamshubhangi0094

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
    
    //Method-1 (Dp solution) (space - O(n))
    int findMaxSum(int *arr, int n) {
	    // code here
	    int dp[n+1];
	    
	    if(n==1)
	        return arr[0];
	    
	    dp[1]=arr[0];
	    dp[2]=max(arr[0],arr[1]);
	    
	    for(int i=3;i<=n;i++){
	        dp[i]=max(dp[i-1],dp[i-2]+arr[i-1]);
	    }
	    
	    return dp[n];
	}

    //Method-2 (optimized) (space - O(1))
	int findMaxSum(int *arr, int n) {
	    // code here
	    
	    if(n==1)
	        return arr[0];
	    
	    int prev_prev=arr[0];
	    int prev=max(arr[0],arr[1]);
	    int res=prev;
	    
	    for(int i=3;i<=n;i++){
	        res=max(prev,prev_prev+arr[i-1]);
	        prev_prev=prev;
	        prev=res;
	    }
	    
	    return res;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends