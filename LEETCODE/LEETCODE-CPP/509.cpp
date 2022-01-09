//509. Fibonnaci Number

//method-1 (brute force)
class Solution {
public:
    int fib(int n) 
    {
        int sum=0, a=0,b=1,c;
        
        if(n==0)
            return 0;
        else if(n==1 || n==2)
            return 1;
        
        else
        {
            for(int i=3;i<=n;i++)
            {
                c=b;
                b=a+b;
                a=c;
                sum= a+b;
            }
        }
        return sum;
    }
};


//method-2 (memoization/ top-bottom)
class Solution {
public:
    int fib(int n) {
        
        vector<int> dp(n+1,-1);
        int ans=calc(n, dp);
        
        return ans;
    }
    
    int calc(int n, vector<int> &dp){
        if(n<=1)
            return n;
        
        if(dp[n]!=-1)
            return dp[n];
        
        dp[n]=calc(n-1,dp)+calc(n-2,dp);
        
        return dp[n];
    }
};


//method-3 (tabulation/ bottom-up)
class Solution {
public:
    int fib(int n) {
        vector<int> res(n+1);
        
        if(n==0 || n==1)
            return n;
        
        res[0]=0;
        res[1]=1;
        
        for(int i=2;i<=n;i++)
            res[i]=res[i-1]+res[i-2];
        
        return res[n];
    }
};