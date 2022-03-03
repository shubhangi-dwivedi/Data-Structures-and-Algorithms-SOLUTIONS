//Activity Selection
//https://practice.geeksforgeeks.org/problems/activity-selection-1587115620/1/


//Method-1 (Greedy Approach)
// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({start[i],end[i]});
        }
        
        sort(arr.begin(),arr.end(),myCmp);
        
        int res=1, prev=0;
        for(int i=1;i<n;i++)
            if(arr[i].first>arr[prev].second){
                res++;
                prev=i;
            }
        
        return res;
    }
    
    static bool myCmp(pair<int,int> a, const pair<int,int> b){
        return a.second<b.second;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends




//Method-2 (Greedy Approach)

  // { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
        // Your code here
        vector<pair<int,int>> arr;
        for(int i=0;i<n;i++){
            arr.push_back({end[i], start[i]});
        }
        
        //stored end as first and start as second.. so that camparision function is not required
        //storing based on first value of pair (which is end time)
        sort(arr.begin(),arr.end());
        
        int res=1, prev=0;
        for(int i=1;i<n;i++)
            if(arr[i].second>arr[prev].first){
                res++;
                prev=i;
            }
        
        return res;
    }
    
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends