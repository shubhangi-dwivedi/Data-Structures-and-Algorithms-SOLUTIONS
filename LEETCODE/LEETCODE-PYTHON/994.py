# 994. Rotting Oranges
# https://leetcode.com/problems/rotting-oranges/description/

# Method-1 BFS (TC-O(m*n))
class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m,n=len(grid),len(grid[0])
        q=deque()
        dir=[(0,-1),(0,1),(-1,0),(1,0)]

        count_oranges=0
        for i in range(m):
            for j in range(n):
                if grid[i][j]==2:
                    q.append([i,j])
                if grid[i][j]==1:
                    count_oranges+=1

        if count_oranges==0:
            return 0
        if not q:
            return -1

        #starting from -1 bcz the queue will initally contain rotten oranges only so no need to count time
        time=-1
        while q:
            size=len(q)

            while size>0:
                size-=1
                x,y=q.popleft()

                for dx,dy in dir:
                    i,j=x+dx,y+dy

                    if 0<=i<m and 0<=j<n and grid[i][j]==1:
                        grid[i][j]=2
                        count_oranges-=1
                        q.append([i,j])

            time+=1

        if count_oranges==0:
            return time

        return -1