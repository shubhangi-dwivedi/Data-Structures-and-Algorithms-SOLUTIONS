#326. Power of Three
#https://leetcode.com/problems/power-of-three/description

#Method-1
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        if n<=0:
            return False

        while n%3==0:
            n//=3

        return n==1

#Method-2
class Solution:
    def isPowerOfThree(self, n: int) -> bool:
        n_max=1162261467    # 3^19 is the largest power of 3 in int range

        return n>0 and n_max%n==0
