//Max length chain
//https://practice.geeksforgeeks.org/problems/max-length-chain/1/#

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct val{
	int first;
	int second;
};



int maxChainLen(struct val p[],int n);
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		val p[n];
		for(int i=0;i<n;i++)
		{
			cin>>p[i].first>>p[i].second;
		}
		
		cout<<maxChainLen(p,n)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*
The structure to use is as follows
struct val{
	int first;
	int second;
};*/


//Method-1 (DP solution) (time- O(n*n))  -----Not optimized solution-----
bool compare(struct val a, struct val b){
    //if(a.first==b.first)
    return a.second<b.second;
    //return a.first>b.first;
}
int maxChainLen(struct val p[],int n)
{
//Your code here
    sort(p,p+n,compare);
    
    vector<int>lis(n,1);
    
    for(int i=1;i<n;i++){
        //lis[i]=1;
        for(int j=0;j<i;j++)
            if(p[i].first>p[j].second)
                lis[i]=max(lis[i],1+lis[j]);
    }
                
    int max_len=lis[0];
    for(int i=1;i<n;i++)
        max_len=max(max_len,lis[i]);
    
    return max_len;
}
