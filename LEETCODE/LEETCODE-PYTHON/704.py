# 704. Binary Search
# https://leetcode.com/problems/binary-search/

# Method-1 Binary Search
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        low, high= 0, len(nums)-1

        while(low<=high):
            mid=low+(high-low)//2

            if nums[mid]==target:
                return mid
            elif nums[mid]<target:
                low=mid+1
            elif nums[mid]>target:
                high=mid-1

        return -1