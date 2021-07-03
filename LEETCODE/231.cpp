//231. Power of Two

class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        if(n<=0)
            return false;
        if(n==1)
            return true;
        
        int count=0,x=n;
        if(n%2==0)
            while(n)
            {
                n/=2;
                count++;
            }
        
        long int res=pow(2,count-1);
        if(res==x)
            return true;
        
        return false;
    }
};