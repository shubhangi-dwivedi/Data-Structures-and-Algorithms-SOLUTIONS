//326. Power of Three
//https://leetcode.com/problems/power-of-three/

//Method - 1
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

//Method - 2
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==0)
            return false;
        
        if(ceil(log10(n)/log10(3))==floor(log10(n)/log10(3)))
            return true;
        else
            return false;
    }
};