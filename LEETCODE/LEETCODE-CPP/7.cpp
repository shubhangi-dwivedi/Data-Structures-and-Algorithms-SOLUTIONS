//7. Reverse Integer

class Solution {
public:
    int reverse(int x) 
    {
        int rem , count=0;
        
        int long num_n=0;
        
        if(x < 0)
        {
            count++;
        }
        
        int n = abs(x);
            
        while(n!=0)
        {
            rem = n%10;
            n = n/10;
            
            if(num_n*10 > INT_MAX || num_n*10 < INT_MIN)
               return 0;

            num_n = num_n*10 + rem;
        }
        
        if(x==0)
        {
            return 0;
        }
        else
        {
            if(count==1)
                return (-1)*num_n;
            else
                return num_n;
        }
    }
};