//Date: 11/03/2022

//Height Using Parent Array
//https://practice.geeksforgeeks.org/problems/height-using-parent-array4103/1#

// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int findHeight(int n, int arr[]){
        // code here
        int ht=0;
        
        for(int i=0;i<n;i++){
            int idx=i,x=1;
            
            while(arr[idx]!=-1){
                x++;
                idx=arr[idx];
            }
            
            ht=max(ht,x);
        }
        return ht;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int arr[N];
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.findHeight(N, arr)<<"\n";
    }
    return 0;
}  // } Driver Code Ends