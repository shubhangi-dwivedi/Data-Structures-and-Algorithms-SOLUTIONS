// 2264. Largest 3-Same-Digit Number in String
// https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/

function largestGoodInteger(num: string): string {
    let res: string = "";

    for (let i = 0; i + 2 < num.length; i++) {
        if (num[i] === num[i + 1] && num[i + 1] === num[i + 2]) {
            let cur: string = num.substring(i, i + 3);
            if (cur > res) {
                res = cur;
            }
        }
    }

    return res;
}
