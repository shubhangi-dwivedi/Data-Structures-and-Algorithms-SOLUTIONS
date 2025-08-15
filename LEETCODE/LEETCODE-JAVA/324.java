// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

class Solution {
    public boolean isPowerOfFour(int n) {
        if(n<=0){
            return false;
        }

        while(n%4==0){
            n/=4;
        }

        return n==1;
    }
}