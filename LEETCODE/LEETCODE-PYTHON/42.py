# 42. Trapping Rain Water
# https://leetcode.com/problems/trapping-rain-water/description/

#Method-1 using brute force TC(O(n^2))
class Solution:
    def trap(self, height: List[int]) -> int:
        n=len(height)
        tot_water=0

        for i in range(1,n-1):
            left_max=0
            right_max=0

            #left max bar
            for j in range(i,-1,-1):
                left_max=max(left_max,height[j])
            #right max bar
            for j in range(i,n):
                right_max=max(right_max,height[j])

            #adding each quantity
            tot_water+=min(left_max,right_max)-height[i]
        
        return tot_water

#Method-2 using two-pointers(TC-O(n))
class Solution:
    def trap(self, height: List[int]) -> int:
        n=len(height)
        left=0
        right=n-1
        tot_water=0
        left_max,right_max=0,0

        while left<right:
            if height[left]<height[right]:
                left_max=max(left_max,height[left])
                tot_water+=left_max-height[left]
                left+=1
            else:
                right_max=max(right_max,height[right])
                tot_water+=right_max-height[right]
                right-=1

        return tot_water