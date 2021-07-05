//https://leetcode.com/problems/sqrtx/
//Square root of an integer

class Solution {
public:
    int mySqrt(int x) {
        
        long int i,res;
        
        for( i=0;i*i<=x;i++)
            res=i*i;
        
        if(res<=x)
            return i-1;
        
        return -1;
    }
};