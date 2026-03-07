# 242. Valid Anagram
# https://leetcode.com/problems/valid-anagram/description/

# Method-1 using sorting
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)==len(t):
            x=sorted(s)
            y=sorted(t)
            for i in range(len(s)):
                if x[i]!=y[i]:
                    return False
        else:
            return False

        return True
        
# Method-2 using freq counter
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        x=[0]*26
        if len(s)!=len(t):
            return False

        for i in range(len(s)):
            x[ord(s[i])-ord('a')]+=1
            x[ord(t[i])-ord('a')]-=1

        for i in range(26):
            if x[i]!=0:
                return False
        
        return True
