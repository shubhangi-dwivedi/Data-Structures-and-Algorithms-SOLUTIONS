# 200. Number of Islands
# https://leetcode.com/problems/number-of-islands/description/

# Method - 1 using dfs
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m,n=len(grid), len(grid[0])
        count=0
        dir=[(0,1),(0,-1),(1,0),(-1,0)]

        def dfs(i, j):
            if i<0 or i>=m or j<0 or j>=n or grid[i][j]=="0":
                return

            grid[i][j]="0"

            for dx, dy in dir:
                dfs(i+dx,j+dy)
            

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]=="1":
                    dfs(i,j)
                    count+=1

        return count
    
# Method -2 using bfs
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m,n=len(grid), len(grid[0])
        count=0
        dir=[(0,1),(0,-1),(1,0),(-1,0)]

        def bfs(i,j):
            q=deque()
            q.append((i,j))
            grid[i][j]="0"

            while q:
                x,y=q.popleft()

                for dx, dy in dir:
                    temp_x, temp_y = x+dx, y+dy

                    if 0<=temp_x<m and 0<=temp_y<n and grid[temp_x][temp_y]=="1":
                        grid[temp_x][temp_y]="0"
                        q.append((temp_x, temp_y))

        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j]=="1":
                    bfs(i,j)
                    count+=1

        return count