// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

//Method -1 Brute force
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

//Method-2 using log
class Solution {
    public boolean isPowerOfFour(int n) {
        if (n <= 0) {
            return false;
        }

        double x = Math.log(n) / Math.log(4);

        return Math.ceil(x) == Math.floor(x);
    }
}
