#36. Valid Sudoku
#https://leetcode.com/problems/valid-sudoku/description/

# Method-1 using set
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n=9
        rows=[set() for _ in range(n)]
        cols=[set() for _ in range(n)]
        boxes=[set() for _ in range(n)]

        for r in range(n):
            for c in range(n):
                val=board[r][c]

                if val==".":
                    continue

                if val in rows[r]:
                    return False
                rows[r].add(val)

                if val in cols[c]:
                    return False
                cols[c].add(val)

                idx=(r//3)*3+c//3
                if val in boxes[idx]:
                    return False
                boxes[idx].add(val)

        return True

#Method-2 using arrays
class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        n=9
        rows=[[0]*n for _ in range(n)]
        cols=[[0]*n for _ in range(n)]
        boxes=[[0]*n for _ in range(n)]

        for r in range(n):
            for c in range(n):                
                if board[r][c]==".":
                    continue

                pos=int(board[r][c])-1

                if rows[r][pos]==1:
                    return False
                rows[r][pos]=1

                if cols[c][pos]==1:
                    return False
                cols[c][pos]=1

                idx=(r//3)*3+c//3
                if boxes[idx][pos]==1:
                    return False
                boxes[idx][pos]=1

        return True