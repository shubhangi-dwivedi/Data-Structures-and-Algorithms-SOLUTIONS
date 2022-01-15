//Minimum number of deletions
//https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions4610/1/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
int minDeletions(string str, int n);

int main(){
    int t;
    cin >> t;
    while(t--){
        
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minDeletions(s, n) << endl;

    }
return 0;
}// } Driver Code Ends

//Method-1 Tabulation
int minDeletions(string s1, int n) { 
    //complete the function here 
    
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    
    string s2=s1;
    reverse(s1.begin(),s1.end());
    
    //tabulation
    for(int i=1;i<n+1;i++)
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1])
                dp[i][j]=1+dp[i-1][j-1];
            else
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
        }
        
    return n-dp[n][n]; //minimum no. of deletion to make it a palindrome
} 