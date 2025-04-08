# 277. Find the Celebrity
# https://leetcode.com/problems/find-the-celebrity/description/

# The knows API is already defined for you.
# return a bool, whether a knows b
# def knows(a: int, b: int) -> bool:

class Solution:
    def findCelebrity(self, n: int) -> int:
        candidate=0

        for i in range(1,n):
            if(not knows(i,candidate)):
                candidate=i

        for j in range(0,n):
            if(j==candidate):
                continue
            
            if(not knows(j,candidate) or knows(candidate,j)):
                return -1

        return candidate