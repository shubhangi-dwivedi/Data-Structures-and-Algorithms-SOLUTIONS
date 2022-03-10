//Date: 09/03/2022

//7 Segment Display 
//https://practice.geeksforgeeks.org/problems/7-segment-display0752/1#

//Method-1 (Greedy Approach)
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string sevenSegments(string s, int n) {
        // code here
        int count[10]={6, 2, 5, 5, 4, 5, 6, 3, 7, 5};
        int arr[n];
        
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=count[s[i]-'0'];
    
        string res="";
        
        //inserting 1 to every position
        for(int i=0;i<n;i++){
            arr[i]=2;
            sum-=2;
        }
        
        int i=0;
        //took 4 as limiting 
        while(i<n && sum>=4){
            arr[i]=6;   //inserting 0 to every pos
            sum+=2;
            sum-=6;
            i++;
        }
        
        arr[n-1]+=sum;
        
        for(int i=0;i<n;i++){
            if(arr[i]==6)
                res+='0';
            else if(arr[i]==2)
                res+='1';
            else if(arr[i]==3)
                res+='7';
            else if(arr[i]==4)
                res+='4';
            else
                res+='2';
        }
        
        return res;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        string S;
        cin>>S;

        Solution ob;
        cout << ob.sevenSegments(S,N) << endl;
    }
    return 0;
}  // } Driver Code Ends