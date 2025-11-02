# 547. Number of Provinces
# https://leetcode.com/problems/number-of-provinces/description/

# Method-1 using DFS
class Solution:
    def findCircleNum(self, isConnected: List[List[int]]) -> int:
        n= len(isConnected)
        visited = [False]*n
        count=0

        def helper(x):
            visited[x]=True

            for j in range(n):
                if isConnected[x][j]==1 and visited[j]==False:
                    helper(j)

        for i in range(n):
            if visited[i]== False:
                count+=1
                helper(i)

        return count