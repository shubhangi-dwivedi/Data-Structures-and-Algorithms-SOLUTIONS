//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1
//Check whether a String is Palindrome or not


#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPlaindrome(string S)
	{
	    // Your code goes here
	    int n=S.length(),end=n-1;
	    
	    for(int i=0;i<n/2;i++)
	    {
	        if(S[i]!=S[end])
	            return 0;
	            
	       end--;
	    }
	    return 1;
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPlaindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends