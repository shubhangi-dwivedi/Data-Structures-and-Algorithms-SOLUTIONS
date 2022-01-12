//https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1/#

// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int countMin(string s){
    //complete the function here
    //logic same as min. no. of deletion to make it a palindrome
        int n=s.length();
        vector<vector<int>> dp(n+1,vector<int>(n+1,0));
        string t=s;
        reverse(s.begin(),s.end());
        
        int x=lcs(dp,s,t,n,n);
        
        return n-x;
    }

    //tabulation
    int lcs(vector<vector<int>> &dp, string s, string t, int m, int n){
        for(int i=1;i<m+1;i++)
            for(int j=1;j<n+1;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=1+dp[i-1][j-1];
                else
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
            
        return dp[m][n]; 
    }
};

// { Driver Code Starts.
int main(){
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        Solution ob;
        cout << ob.countMin(str) << endl;
    }
return 0;
}

  // } Driver Code Ends