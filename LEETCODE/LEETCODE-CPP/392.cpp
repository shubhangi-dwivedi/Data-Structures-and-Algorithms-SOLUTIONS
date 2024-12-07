//392. Is Subsequence
//https://leetcode.com/problems/is-subsequence/

//Method-1 (dp- memoization) (same as Lcs solution) (not optimized solution)
class Solution {
public:
    int dp[101][10001];
    
    bool isSubsequence(string s, string t) {
        int m=s.length(), n=t.length();
        memset(dp,-1,sizeof(dp));
        
        int x=calc(s,t,m,n);
        if(x==s.length())
            return true;
        else 
            return false;
    }
    
    int calc(string s, string t, int m, int n){
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        if(m==0||n==0)
            return dp[m][n]=0;
        else{
            if(s[m-1]==t[n-1])
                dp[m][n]=1+calc(s,t,m-1,n-1);
            else
                dp[m][n]=max(calc(s,t,m-1,n),calc(s,t,m,n-1));
        }
        
        return dp[m][n];
        
    }
};

//Method-2 (dp-memoization) (little bit changed from LCS) (not optimized solution)
class Solution {
public:
    int dp[101][10001];
    
    bool isSubsequence(string s, string t) {
        int m=s.length(), n=t.length();
        memset(dp,-1,sizeof(dp));
        
        if(calc(s,t,m,n))
            return true;
        else 
            return false;
    }
    
    bool calc(string s, string t, int m, int n){
        if(dp[m][n]!=-1)
            return dp[m][n];
        
        if(m==0)
            return true;
        if(n==0)
            return false;
        
        if(s[m-1]==t[n-1])
            return dp[m][n]=calc(s,t,m-1,n-1);
        else
            return dp[m][n]=calc(s,t,m,n-1);      
        
    }
};

//Method-3 (dp-tabulation) (not optimized solution) 
class Solution {
public:
    bool dp[101][10001];
    
    bool isSubsequence(string s, string t) {
        int m=s.length(), n=t.length();
        
        if(calc(s,t,m,n))
            return true;
        else 
            return false;
        
    }
    
    bool calc(string s, string t, int m, int n){
        for(int i=0;i<=m;i++)
           dp[i][0]=false;
        for(int i=0;i<=n;i++)
            dp[0][i]=true;
        
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++){
                if(s[i-1]==t[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else
                    dp[i][j]=dp[i][j-1];
            }
        
        return dp[m][n];

    }
};

//Method-4 (2 pointer approach) (optimized solution) (time-O(n))
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length(), n=t.length();
        
        int i=0, j=0;
        while(j<n){
            if(s[i]==t[j]){
                i++,j++;
            }
            else{
                j++;
            }
            
            if(i==m){
            return true;
        }
        }
        
        //placing it outside if input is ""
        /*
        s=""
        t=""
        */
        if(i==m){
            return true;
        }
        
        return false;
    }
};