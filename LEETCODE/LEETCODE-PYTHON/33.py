# 33. Search in Rotated Sorted Array
# https://leetcode.com/problems/search-in-rotated-sorted-array/

# Method-1 using Binary search (TC-O(logN))
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low,high = 0, len(nums)-1

        while low<=high:
            mid= low+(high-low)//2

            if nums[mid]==target:
                return mid

            if nums[low]<=nums[mid]:
                if nums[low]<=target and nums[mid]>target:
                    high=mid-1
                else:
                    low=mid+1
            else:
                if nums[high]>=target and nums[mid]<target:
                    low=mid+1
                else:
                    high=mid-1
        
        return -1
