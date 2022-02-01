//Coin Change - Number of ways
//https://practice.geeksforgeeks.org/problems/coin-change-number-of-ways/1/

// { Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++


class Solution
{
    public:
    //Function to find out the number of ways to use the coins to
    //sum up to a certain required value.
    long long numberOfWays(int coins[],int numberOfCoins,int value)
    {
        //Method-1 Tabulation
        int m=value, n=numberOfCoins;
        
        vector<vector<long long>> dp(m+1,vector<long long>(n+1, 0));
        
        for(int i=0;i<n+1;i++)
            dp[0][i]=1;
            
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                dp[i][j]=dp[i][j-1];
                
                if(coins[j-1]<=i){
                    dp[i][j]+=dp[i-coins[j-1]][j];
                }
            }
        
        return dp[m][n];
    }
    
};


// { Driver Code Starts.


int main() {
    
    //taking total count of testcases
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    //taking value
	    int value;
	    cin>>value;
	    
	    //taking number of coins
	    int numberOfCoins;
	    cin>>numberOfCoins;
	    int coins[numberOfCoins];
	    
	    //inserting coins to the array
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function numberOfWays
	    cout<<obj.numberOfWays(coins,numberOfCoins,value)<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends