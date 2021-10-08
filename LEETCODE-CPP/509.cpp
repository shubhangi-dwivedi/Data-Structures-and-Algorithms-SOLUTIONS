//509. Fibonnaci Number

//method-1
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


//method-2 
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