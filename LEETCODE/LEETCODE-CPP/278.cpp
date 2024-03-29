//278. First Bad Version
//https://leetcode.com/problems/first-bad-version/

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l=0,u=n,res=n;
        
        while(l<=u){
            int mid= l+ (u-l)/2;
            
            if(isBadVersion(mid)){
                res=mid;
                u=mid-1;
            }
            else
                l=mid+1;
        }
        
        return res;
    }
};