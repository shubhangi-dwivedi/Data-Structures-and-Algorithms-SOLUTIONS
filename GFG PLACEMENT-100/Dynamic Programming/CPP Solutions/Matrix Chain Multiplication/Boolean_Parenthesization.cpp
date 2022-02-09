//Boolean Parenthesization
//https://practice.geeksforgeeks.org/problems/boolean-parenthesization5610/1/#


//Method-1 (Recursion)
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
    map<string, int> m;
    int mod=1003;
    
    int countWays(int N, string S){
        // code here
        m.clear();
        return solve(S,0,N-1,true)%mod;
    }
    
    int solve(string s, int i, int j, bool flag){
        if(i>j)
            return 0;
        
        if(i==j){
            if(flag==true)
                return s[i]=='T';
            else
                return s[i]=='F';
        }
        
        string key=to_string(i)+" "+to_string(j)+" "+to_string(flag);
        
        if(m.find(key)!=m.end())
            return m[key];
            
        int ans=0;
        for(int k=i+1;k<j;k+=2){
            int lf=solve(s,i,k-1,false);
            int lt=solve(s,i,k-1,true);
            int rf=solve(s,k+1,j,false);
            int rt=solve(s,k+1,j,true);
            
            if(s[k]=='&'){
                if(flag == true)
                    ans += (lt*rt) % mod;
                else
                    ans += ((lt*rf) + (lf*rt) + (lf*rf)) % mod;
            }
            else if(s[k]=='|'){
                if(flag == true)
                    ans += ((lt*rf) + (lf*rt) + (lt*rt)) % mod;
                else
                    ans += ((lf*rf)) % mod;
            }
            else if(s[k]=='^')
            {
                if(flag == true)
                    ans += ((lt*rf) + (lf*rt)) % mod;
                else
                    ans += ((lt*rt) + (lf*rf)) % mod;
            }
        }
        
        return m[key]=ans%mod;
        
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.countWays(N, S)<<"\n";
    }
    return 0;
}  // } Driver Code Ends