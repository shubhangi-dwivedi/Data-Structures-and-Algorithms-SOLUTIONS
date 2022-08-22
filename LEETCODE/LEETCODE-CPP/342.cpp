//342. Power of Four
//https://leetcode.com/problems/power-of-four/

//Method - 1
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


//Method -2 
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n==0)
            return false;
        
        float x=log(n)/log(4);
        
        if(ceil(x)==floor(x))
            return true;
        else
            return false;
    }
};