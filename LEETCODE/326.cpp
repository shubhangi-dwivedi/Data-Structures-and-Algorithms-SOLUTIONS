//326. Power of Three

class Solution {
public:
    bool isPowerOfThree(int n) {
     
        if(n==0)
            return false;
        if(n==1)
            return true;
        
        int count=0,x=n;
        if(n%3==0)
            while(n)
            {
                n/=3;
                count++;
            }
        
        int res=pow(3,count-1);
        if(res==x)
            return true;
        
        return false;
        
    }
};