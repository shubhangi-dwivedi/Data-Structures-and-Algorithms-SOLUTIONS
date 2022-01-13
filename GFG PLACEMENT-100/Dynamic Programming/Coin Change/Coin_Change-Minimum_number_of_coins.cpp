//Coin Change - Minimum number of coins
//https://practice.geeksforgeeks.org/problems/coin-change-minimum-number-of-coins/1/#

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//Complete this function

class Solution
{
    public:
    //Function to find the minimum number of coins to make the change 
    //for value using the coins of given denominations.

    //Method-1 Tabulation
    long long minimumNumberOfCoins(int coins[],int numberOfCoins,int value)
    {
        // your code here
        int m=numberOfCoins, n=value;
        
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        
        for(int i=1;i<m+1;i++)
            dp[i][0]=0;
        for(int j=0;j<n+1;j++)
            dp[0][j]=INT_MAX-1;
            
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                
                dp[i][j]=dp[i-1][j];
                
                if(coins[i-1]<=j)
                    dp[i][j]=min(1+dp[i][j-coins[i-1]],dp[i-1][j]);
            }
            
        return dp[m][n]!=INT_MAX-1? dp[m][n]:-1;
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
	    
	    //taking value of each coin
	    for(int i=0;i<numberOfCoins;i++)
	    cin>>coins[i];
	    Solution obj;
	    //calling function minimumNumberOfCoins()
	    int answer=obj.minimumNumberOfCoins(coins,numberOfCoins,value);
	    
	    //printing "Not Possible" if answer is -1
	    //else printing answer
	    if(answer==-1)
	    cout<<"Not Possible"<<endl;
	    else
	    cout<<answer<<endl;
	    
	}
	return 0;
}  // } Driver Code Ends