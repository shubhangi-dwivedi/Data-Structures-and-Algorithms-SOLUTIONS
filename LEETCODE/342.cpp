//342. Power of Four

class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n==0)
            return false;
        if(n==1)
            return true;
        
        int count=0,x=n;
        if(n%4==0)
            while(n)
            {
                n/=4;
                count++;
            }
        
        int res=pow(4,count-1);
        if(res==x)
            return true;
        
        return false;
    }
};