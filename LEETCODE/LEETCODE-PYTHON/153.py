# 153. Find Minimum in Rotated Sorted Array
# https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

# Method-1 using binary search (TC-O(logn))
class Solution:
    def findMin(self, nums: List[int]) -> int:
        low,high= 0, len(nums)-1

        while low<high:
            mid=low+(high-low)//2

            if nums[mid]>nums[high]:
                low=mid+1
            else:
                high=mid

        return nums[low]