// 1323. Maximum 69 Number
// https://leetcode.com/problems/maximum-69-number/description

/**
 * @param {number} num
 * @return {number}
 */

//Method-1 brute force
var maximum69Number  = function(num) {
    let s= num.toString().split('');

    for(let i=0;i<s.length;i++){
        if(s[i]==='6'){
            s[i]='9';
            break;
        }
    }

    return parseInt(s.join(''));
};

//Method-2 one-liner code
var maximum69Number  = function(num) {
    return parseInt(num.toString().replace('6', '9'));
};