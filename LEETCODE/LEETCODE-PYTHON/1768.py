# 1768. Merge Strings Alternately
# https://leetcode.com/problems/merge-strings-alternately

class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        res=[]

        i=0
        while i<len(word1) or i<len(word2):
            if i<len(word1):
                res.append(word1[i])
            if i<len(word2):
                res.append(word2[i])

            i+=1

        return ''.join(res)