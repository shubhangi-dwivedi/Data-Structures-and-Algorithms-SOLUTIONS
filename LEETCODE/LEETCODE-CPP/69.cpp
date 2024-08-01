//69. Sqrt(x)
//https://leetcode.com/problems/sqrtx/

//Method-1 (brute force)
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


//Method-2 (binary search)
class Solution {
public:
    int mySqrt(int x) {
        if(x==1)
            return 1;
        long low=0, high=x/2;

        while(low<=high){
            long mid=low+(high-low)/2;

            if(mid*mid==x)
                return mid;
            else if(mid*mid>x)
                high=mid-1;
            else
                low=mid+1;
        }

        return high;
    }
};