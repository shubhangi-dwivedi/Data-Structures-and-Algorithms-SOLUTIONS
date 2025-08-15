// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

//Method-1 Brute force
function isPowerOfFour(n: number): boolean {
    if(n<=0){
        return false;
    }

    while(n%4===0){
        n/=4;
    }

    return n===1;
};

//Method-2 using log
function isPowerOfFour(n: number): boolean {
    if (n <= 0) {
        return false;
    }

    let x = Math.log(n) / Math.log(4);
    
    return Math.ceil(x) === Math.floor(x);
};