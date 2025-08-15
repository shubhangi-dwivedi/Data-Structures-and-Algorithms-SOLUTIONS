// 342. Power of Four
// https://leetcode.com/problems/power-of-four/

/**
 * @param {number} n
 * @return {boolean}
 */
var isPowerOfFour = function(n) {
    if(n<=0){
        return false;
    }

    while(n%4===0){
        n/=4;
    }

    return n===1;
};