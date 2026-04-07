# 703. Kth Largest Element in a Stream
# https://leetcode.com/problems/kth-largest-element-in-a-stream/description/

# Method-1 using min-heap O((M+N)⋅logk) [M-initial stream length, N-number of add calls]
class KthLargest:

    def __init__(self, k: int, nums: List[int]):
        self.min_heap=[]
        self.k=k

        for num in nums:
            self.add(num)

    def add(self, val: int) -> int:
        if len(self.min_heap) < self.k or self.min_heap[0] < val:
            heapq.heappush(self.min_heap,val)

            if len(self.min_heap) > self.k:
                heapq.heappop(self.min_heap)

        return self.min_heap[0]
        


# Your KthLargest object will be instantiated and called as such:
# obj = KthLargest(k, nums)
# param_1 = obj.add(val)