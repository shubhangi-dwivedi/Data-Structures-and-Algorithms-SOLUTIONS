//Longest Bitonic subsequence 
//https://practice.geeksforgeeks.org/problems/longest-bitonic-subsequence0824/1/#

// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
	public:

    //Method-1 (DP solution) (Time- O(n*n))
	int LongestBitonicSequence(vector<int>nums)
	{
	    // code here
	    int n=nums.size();
	    vector<int>lis(n,1);
	    vector<int>lds(n,1);
	    
	    for(int i=1;i<n;i++){
	        for(int j=0;j<i;j++)
	            if(nums[i]>nums[j])
	                lis[i]=max(lis[i],1+lis[j]);
	    }
	    
	    for(int i=n-1;i>=0;i--){
	        for(int j=n-1;j>i;j--)
	            if(nums[i]>nums[j])
	                lds[i]=max(lds[i],1+lds[j]);
	    }
	    
	    int res= lis[0]+lds[0]-1;
	    for(int i=1;i<n;i++)
	        res=max(res, lis[i]+lds[i]-1);
	     
	    
	    return res;
	}
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<int>nums(n);
		for(int i = 0; i < n; i++)
			cin >> nums[i];
		Solution ob;
		int ans = ob.LongestBitonicSequence(nums);
		cout << ans <<"\n";
	}
	return 0;
}  // } Driver Code Ends