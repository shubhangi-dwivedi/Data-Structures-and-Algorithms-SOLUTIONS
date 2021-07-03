//278. First Bad Version


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        long int mid,res=n,l=1,h=n;
        
        while(l<=h)
        {
            mid=l+(h-l)/2;
            
            if(isBadVersion(mid))
            {
                res=mid;
                h=mid-1;
            }
            else
                l=mid+1;
        }
        
        return res;   
    }
};