//N meetings in one room 
//https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room-1587115620/1/#

//Method-1 (Greedy solution) (same as activity selection)

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>> time_slot;
        for(int i=0;i<n;i++)
            time_slot.push_back({end[i],start[i]});
            
        sort(time_slot.begin(), time_slot.end());
        
        int count=1;
        int prev=0;
        for(int curr=1;curr<n;curr++)
            if(time_slot[prev].first<time_slot[curr].second){
                count++;
                prev=curr;
            }
        
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}  // } Driver Code Ends