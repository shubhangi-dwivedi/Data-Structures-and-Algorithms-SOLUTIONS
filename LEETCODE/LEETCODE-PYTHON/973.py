# 973. K Closest Points to Origin
# https://leetcode.com/problems/k-closest-points-to-origin/description/

# Method-1 using heap (TC-O(nlogk))
class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        heap=[]

        for i in range(len(points)):
            x, y = points[i]
            dist = x*x + y*y 

            heapq.heappush(heap, (-dist, [x,y]))

            if len(heap) > k:
                heapq.heappop(heap)

        return [point for (_, point) in heap]