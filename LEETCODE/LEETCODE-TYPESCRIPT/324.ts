// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

function isPowerOfFour(n: number): boolean {
    if(n<=0){
        return false;
    }

    while(n%4===0){
        n/=4;
    }

    return n===1;
};