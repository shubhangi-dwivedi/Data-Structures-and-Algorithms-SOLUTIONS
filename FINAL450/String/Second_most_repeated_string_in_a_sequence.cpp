//https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1
//Second most repeated string in a sequence

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        //code here.
        map<string,int>m;
        string res1="",res2="";
        for(int i=0;i<n;i++)
            m[arr[i]]++;
            
        int max1=INT_MIN,max2=INT_MIN;
        for(auto i:m)
        {
            if(i.second>max1)
            {
                max2=max1;
                res2=res1;
                max1=i.second;
                res1=i.first;
            }
            else if(i.second>max2 && i.second!=max1)
            {
                max2=i.second;
                res2=i.first;
            }
        }
        return res2;
    }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        Solution ob;
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends