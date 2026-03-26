# 286. Walls and Gates
# https://leetcode.com/problems/walls-and-gates/description/


# Method-1 BFS (TC-O(m*n), SC-O(m*n))
class Solution:
    def wallsAndGates(self, rooms: List[List[int]]) -> None:
        """
        Do not return anything, modify rooms in-place instead.
        """
        emptyRoom = 2147483647
        wall = -1
        gate = 0
        dir=[(0,-1), (0,1), (-1,0), (1,0)]
        m,n=len(rooms), len(rooms[0])
        q=deque()

        for i in range(m):
            for j in range(n):
                if rooms[i][j]==gate:
                    q.append([i,j])

        dist=0
        while q:
            size=len(q)
            dist+=1

            while size>0:
                size-=1
                room=q.popleft()
                x,y=room

                for dx,dy in dir:
                    i,j=x+dx, y+dy

                    if 0<=i<m and 0<=j<n and rooms[i][j]==emptyRoom:
                        rooms[i][j]=dist
                        q.append([i,j])