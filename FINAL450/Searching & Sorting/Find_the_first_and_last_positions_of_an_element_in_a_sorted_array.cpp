//https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
//Find first and last positions of an element in a sorted array

#include<bits/stdc++.h>
using namespace std;
vector<int> find(int a[], int n , int x );

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


// } Driver Code Ends


vector<int> find(int arr[], int n , int x )
{
    // code here
    int start=0, end=n-1, first_res=-1,last_res=-1;
    
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(x==arr[mid])
        {
          first_res=mid; //first occurrence
          end=mid-1;
        }
        else if(x<arr[mid])
            end=mid-1;
        else if(x>arr[mid])
            start=mid+1;
    }
    
    start=0;
    end=n-1;
    while(start<=end)
    {
        int mid=start+(end-start)/2;
        
        if(x==arr[mid])
        {
          last_res=mid; //last occurrence
          start=mid+1;
        }
        else if(x<arr[mid])
            end=mid-1;
        else if(x>arr[mid])
            start=mid+1;
    }
    
    vector<int> res{first_res,last_res};
    return res;
}