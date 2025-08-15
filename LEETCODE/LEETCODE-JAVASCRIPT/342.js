// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

/**
 * @param {number} n
 * @return {boolean}
 */

//Method-1 Brute force
var isPowerOfFour = function(n) {
    if(n<=0){
        return false;
    }

    while(n%4===0){
        n/=4;
    }

    return n===1;
};

//Method-2 using log
var isPowerOfFour = function(n) {
    if (n <= 0) {
        return false;
    }

    let x = Math.log(n) / Math.log(4);
    
    return Math.ceil(x) === Math.floor(x);
};