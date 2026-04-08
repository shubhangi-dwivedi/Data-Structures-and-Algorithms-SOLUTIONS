# 1046. Last Stone Weight
# https://leetcode.com/problems/last-stone-weight/description/

# Method-1 using sorting (TC-O(n²))
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        stones.sort()

        while len(stones)>1:
            stone1=stones.pop()
            stone2=stones.pop()

            if stone1!=stone2:
                bisect.insort(stones,stone1-stone2)

        return stones[0] if stones else 0

# Method-2 using heap (TC-O(nlogn))
class Solution:
    def lastStoneWeight(self, stones: List[int]) -> int:
        for i in range(len(stones)):
            stones[i]*=-1

        heapq.heapify(stones)

        while len(stones)>1:
            stone1=heapq.heappop(stones)
            stone2=heapq.heappop(stones)

            if stone1!=stone2:
                heapq.heappush(stones, stone1-stone2)

        return -heapq.heappop(stones) if stones else 0
        