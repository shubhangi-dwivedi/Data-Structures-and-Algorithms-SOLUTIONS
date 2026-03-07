# 347. Top K Frequent Elements
# https://leetcode.com/problems/top-k-frequent-elements/description/

# Method-1 using minheap O(nlogn)
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        if k==len(nums):
            return nums

        freq= Counter(nums)

        return heapq.nlargest(k, freq.keys(), key=freq.get)
    
#try using quick sort O(n)