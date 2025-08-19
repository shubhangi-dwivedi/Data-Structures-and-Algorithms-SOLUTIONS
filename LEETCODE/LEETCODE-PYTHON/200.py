# 200. Number of Islands
# https://leetcode.com/problems/number-of-islands/description/

# Method - 1 using dfs
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m,n =len(grid), len(grid[0])
        vis=defaultdict(bool)

        dir= [(-1,0),(1,0),(0,-1),(0,1)]
        
        def dfs(i,j):
            if i<0 or j<0 or i>=m or j>=n or vis[(i,j)] or grid[i][j]=='0':
                return

            vis[(i,j)]=True
            for dx, dy in dir:
                dfs(i+dx,j+dy)


        count=0
        for i in range(m):
            for j in range(n):
                if not vis[(i,j)] and grid[i][j]=='1':
                    count+=1
                    dfs(i,j)

        return count
    
# Method -2 using bfs
class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        m,n =len(grid), len(grid[0])
        vis=defaultdict(bool)

        dir= [(-1,0),(1,0),(0,-1),(0,1)]
        
        def bfs(i,j):
            q= deque()
            q.append((i,j))
            grid[i][j] = '0'  # mark visited by sinking the island

            while(q):
                x,y=q.popleft()
                for dx, dy in dir:
                    tempx, tempy= x+dx, y+dy
                    if 0<=tempx<m and 0<=tempy<n and grid[tempx][tempy]=='1':
                        grid[tempx][tempy]='0'
                        q.append((tempx, tempy))


        count=0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == '1':
                    bfs(i, j)
                    count += 1

        return count