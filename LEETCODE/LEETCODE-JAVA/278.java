//278. First Bad Version
//https://leetcode.com/problems/first-bad-version/

/* The isBadVersion API is defined in the parent class VersionControl.
      boolean isBadVersion(int version); */

public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int l=0,u=n,res=n;
        
        while(l<=u){
            int mid= l+(u-l)/2;
            
            if(isBadVersion(mid)){
                res=mid;
                u=mid-1;
            }
            else
                l=mid+1;
        }
        
        return res;
    }
}