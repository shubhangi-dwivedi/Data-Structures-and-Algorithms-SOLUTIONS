//172. Factorial Trailing Zeroes
//https://leetcode.com/problems/factorial-trailing-zeroes/

class Solution {
    public int trailingZeroes(int n) {
        int res=0;
        
        for(int i=5;i<=n;i*=5)
            res=res+n/i;
        
        return res;
    }
}
