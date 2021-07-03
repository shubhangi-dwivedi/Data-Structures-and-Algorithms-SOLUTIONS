//509. Fibonnaci Number

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