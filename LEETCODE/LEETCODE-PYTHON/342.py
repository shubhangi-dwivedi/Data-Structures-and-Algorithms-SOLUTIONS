# 342. Power of Four
# https://leetcode.com/problems/power-of-four/

#Method-1 Brute Force
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n<=0:
            return False

        while n%4==0:
            n//=4

        return n==1
        
#Method-2 using log
class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n <= 0:
            return False
    
        x = math.log(n, 4) 
        return math.ceil(x) == math.floor(x)
        