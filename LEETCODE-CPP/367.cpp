//367. Valid Perfect Square

//method 1
class Solution {
public:
    bool isPerfectSquare(int num) {
        
        long int i;
        for( i=1;i*i<num;i++)
            ;
        
        if(i*i==num)
            return true;
        
        return false;
    }
};


//method 2
class Solution {
public:
    bool isPerfectSquare(int num) {
        
       long int l=1, h=100000,mid,res;
        
        while(l<=h)
        {
            mid=l+(h-l)/2;
            res=mid*mid;
            
            if(res==num)
                return true;
            else if(res<num)
                l=mid+1;
            else
                h=mid-1;
        }
        
        return false;
    }
};