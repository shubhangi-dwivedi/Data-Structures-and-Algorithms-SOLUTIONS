# 215. Kth Largest Element in an Array
#https://leetcode.com/problems/kth-largest-element-in-an-array/

# Mehod-1 using sorting (TC-0(nlogn))
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        nums.sort(reverse=True)

        return nums[k-1]

# Method-2 using heap (TC-O(nlok))
class Solution:
    def findKthLargest(self, nums: List[int], k: int) -> int:
        heap=[]

        for num in nums:
            heapq.heappush(heap,num)

            if len(heap)>k:
                heapq.heappop(heap)

        return heap[0]