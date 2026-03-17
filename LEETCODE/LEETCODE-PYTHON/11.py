#11. Container With Most Water
#https://leetcode.com/problems/container-with-most-water/description/

# Method-1 Two pointers (TC-O(n))
class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0
        j=len(height)-1

        max_storage=0
        while(i<j):
            x=min(height[i],height[j])*(j-i)

            max_storage=max(max_storage,x)

            if height[i]<height[j]:
                i+=1
            else:
                j-=1

        return max_storage
