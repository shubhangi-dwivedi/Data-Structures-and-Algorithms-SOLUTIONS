# 1323. Maximum 69 Number
# https://leetcode.com/problems/maximum-69-number/description

class Solution:
    def maximum69Number (self, num: int) -> int:
        arr=list(str(num))

        for i in range(len(arr)):
            if arr[i]=='6':
                arr[i]='9'
                break

        return int("".join(arr))