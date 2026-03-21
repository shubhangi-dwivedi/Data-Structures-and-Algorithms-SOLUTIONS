# 3. Longest Substring Without Repeating Characters
# https://leetcode.com/problems/longest-substring-without-repeating-characters/description/

# Method-1 brute force using set (TC-O(n^3))
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        def check(start, end):
            chars=set()

            for i in range(start,end+1):
                c=s[i]

                if c in chars:
                    return False
                
                chars.add(c)

            return True

        n=len(s)
        res=0

        for i in range(n):
            for j in range(i,n):
                if check(i,j):
                    res=max(res,j-i+1)

        return res
    
#Method-2 using sliding window & hashmap (TC-O(n))
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        chars=Counter()
        left=right=0
        res=0

        while right<len(s):
            r=s[right]
            chars[r]+=1

            while chars[r]>1:
                l=s[left]
                chars[l]-=1
                left+=1

            res=max(res,right-left+1)
            right+=1

        return res
    
#Method-3 sliding window optimization (TC-O(n))
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        n = len(s)
        ans = 0
        charToNextIndex = {}

        i = 0
        for j in range(n):
            if s[j] in charToNextIndex:
                i = max(charToNextIndex[s[j]], i)

            ans = max(ans, j - i + 1)
            charToNextIndex[s[j]] = j + 1

        return ans