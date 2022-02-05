//Reach the Nth point 
//https://practice.geeksforgeeks.org/problems/reach-the-nth-point5433/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

 //Method-1 (memoization)
class Solution{
	public:
		int nthPoint(int n){
		    // Code here
		    int dp[n+1];
		    memset(dp,0,sizeof(dp));
		    
		    int res=calc(dp,n);
		    
		    return res;
		}
		
		int calc(int dp[], int n){
		    if(n==0)
		        return 1;
		    if(n<0)
		        return 0;
		    
		    if(dp[n]!=0)
		        return dp[n];
		        
		    dp[n]=(calc(dp,n-1)+calc(dp,n-2))%1000000007;
		    return dp[n];
		}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthPoint(n);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends