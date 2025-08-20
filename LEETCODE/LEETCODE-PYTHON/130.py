# 130. Surrounded Regions
# https://leetcode.com/problems/surrounded-regions/description/

# Method-1 using dfs
class Solution:
    def solve(self, board: List[List[str]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        m, n=len(board),len(board[0])
        dir=[(-1,0),(1,0),(0,-1),(0,1)]

        def dfs(i,j):
            board[i][j]='#'

            for dx, dy in dir:
                x,y =i+dx, j+dy
                if(0<=x<m and 0<=y<n and board[x][y]=='O'):
                    dfs(x,y)

        # switching all edge O to #
        for i in range(m):
            if board[i][0]=='O':
                dfs(i,0)
            if board[i][n-1]=='O':
                dfs(i,n-1)

        for j in range(n):
            if board[0][j]=='O':
                dfs(0,j)
            if board[m-1][j]=='O':
                dfs(m-1,j)
        
        #Switching back # to O
        for i in range(m):
            for j in range(n):
                if board[i][j]=="O":
                    board[i][j]="X"
                if board[i][j]=="#":
                    board[i][j]="O"
        
        
             

        