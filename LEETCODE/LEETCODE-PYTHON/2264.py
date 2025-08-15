# 2264. Largest 3-Same-Digit Number in String
# https://leetcode.com/problems/largest-3-same-digit-number-in-string/description/

class Solution:
    def largestGoodInteger(self, num: str) -> str:
        res=""

        for i in range(len(num)-2):
            if num[i]==num[i+1]==num[i+2]:
                res=max(res, num[i:i+3])

        return res