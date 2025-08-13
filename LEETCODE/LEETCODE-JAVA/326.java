//326. Power of Three
//https://leetcode.com/problems/power-of-three/description

//Method-1
class Solution {
    public boolean isPowerOfThree(int n) {
        if(n<=0){
            return false;
        }

        while(n%3==0){
            n/=3;
        }

        return n==1;
    }
}

////Method-2
class Solution {
    public boolean isPowerOfThree(int n) {
        int nMax=1162261467;    // 3^19 is the largest power of 3 in int range

        return n>0 && nMax%n==0;
    }
}