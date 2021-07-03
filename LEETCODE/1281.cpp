//1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) 
    {
        int digit, sum =0, product=1;
        
        if(n<=0)
            return 0;
        else
        {
            while(n!=0)
            {
                digit=n%10;
                sum+=digit;
                product*=digit;
                
                n=n/10;
            }
            return product-sum;
        }
    }
};