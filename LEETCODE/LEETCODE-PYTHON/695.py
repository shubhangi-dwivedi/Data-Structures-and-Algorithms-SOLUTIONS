# 695. Max Area of Island
# https://leetcode.com/problems/max-area-of-island/description/

# Method-1 using dfs
class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        m,n=len(grid), len(grid[0])
        max_area=0
        dir=[(0,1),(0,-1),(1,0),(-1,0)]

        def dfs(i,j):
            if i<0 or i>=m or j<0 or j>=n or grid[i][j]==0:
                return 0

            area=1
            grid[i][j]=0

            for dx,dy in dir:
                area+=dfs(i+dx,j+dy)

            return area

        for i in range(m):
            for j in range(n):
                if grid[i][j]==1:
                    area=dfs(i,j)

                    max_area=max(max_area,area)

        return max_area
    
#Method-2 using bfs
class Solution:
    def maxAreaOfIsland(self, grid: List[List[int]]) -> int:
        m,n=len(grid), len(grid[0])
        max_area=0
        dir=[(0,1),(0,-1),(1,0),(-1,0)]

        def bfs(i,j):
            q=deque()
            q.append((i,j))

            area=1
            grid[i][j]=0

            while q:
                x,y=q.popleft()

                for dx, dy in dir:
                    temp_x, temp_y = x+dx, y+dy

                    if 0<=temp_x<m and 0<=temp_y<n and grid[temp_x][temp_y]==1:
                        area+=1
                        grid[temp_x][temp_y]=0
                        q.append((temp_x, temp_y))

            return area    

        for i in range(m):
            for j in range(n):
                if grid[i][j]==1:
                    area=bfs(i,j)

                    max_area=max(max_area,area)

        return max_area