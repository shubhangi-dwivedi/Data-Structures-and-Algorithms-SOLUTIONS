# 1784. Check if Binary String Has at Most One Segment of Ones
# https://leetcode.com/problems/check-if-binary-string-has-at-most-one-segment-of-ones/description/?envType=daily-question&envId=2026-03-06

# Method-1 with counter
class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        count=0
        flag=False

        for i in range(len(s)):
            if s[i]=='1':
                if flag and count==0:
                    return False
                else:
                    flag=True
                    count+=1
            else:
                count=0
            prev=s[i]

        return True
        

# Method-2 without counter
class Solution:
    def checkOnesSegment(self, s: str) -> bool:
        flag=False

        for i in s:
            if i=='0':
                flag=True
            elif flag:
                return False

        return True
        