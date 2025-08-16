// 1323. Maximum 69 Number
// https://leetcode.com/problems/maximum-69-number/description

//Method-1 brute force
function maximum69Number (num: number): number {
    let s : string[]= num.toString().split('');

    for(let i=0;i<s.length;i++){
        if(s[i]==='6'){
            s[i]='9';
            break;
        }
    }

    return parseInt(s.join(''));
};

//Method-2 one-liner code
function maximum69Number (num: number): number {
    return parseInt(num.toString().replace('6','9'));
};