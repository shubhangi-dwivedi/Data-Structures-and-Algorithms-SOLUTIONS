//Minimum number of deletions to make a sorted sequence
//https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-to-make-a-sorted-sequence3248/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
		

	public:

    //Method-1 (Binary search) (Time- O(nlogn))
	int minDeletions(int arr[], int n) 
	{ 
	    // Your code goes here
	    vector<int> tail;
	    int len=1;
	    
	    tail.push_back(arr[0]);
	    
	    for(int i=0;i<n;i++){
	        if(arr[i]>tail[len-1]){
	            tail.push_back(arr[i]);
	            len++;
	        }
	        else{
	            int x=ceilIdx(tail,0,len-1,arr[i]);
	            tail[x]=arr[i];
	        }
	    }
	    
	    return n-len;
	}
	
	int ceilIdx(vector<int> tail, int s, int e, int x){
	    while(e>s){
	        int m=s+(e-s)/2;
	        
	        if(tail[m]>=x)
	            e=m;
	        else
	            s=m+1;
	    }
	    
	    return e;
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

        int arr[n];
        for(int i = 0; i < n; i++)
        	cin >> arr[i];

	    

	    Solution ob;
	    cout << ob.minDeletions(arr, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends