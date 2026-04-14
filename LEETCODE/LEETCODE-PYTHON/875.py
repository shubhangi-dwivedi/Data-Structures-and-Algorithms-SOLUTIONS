# 875. Koko Eating Bananas
# https://leetcode.com/problems/koko-eating-bananas/description/

# Method-1 using Binar search (TC-O(nlogm))     n=no.of miles, m= max banans in a pile
class Solution:
    def minEatingSpeed(self, piles: List[int], h: int) -> int:
        low,high=1,0

        for x in piles:
            high=max(high,x)


        def check(piles,rate,hours):
            timetaken=0

            for x in piles:
                timetaken+=(ceil(x/rate))

                if timetaken>hours:
                    return False
            
            return True
        

        while low<=high:
            mid=low+(high-low)//2

            if check(piles,mid,h):
                high=mid-1
            else:
                low=mid+1

        return low