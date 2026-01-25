# 2133. Check if Every Row and Column Contains All Numbers
# https://leetcode.com/problems/check-if-every-row-and-column-contains-all-numbers/description/

# Method-1 using set
class Solution:
    def checkValid(self, matrix: List[List[int]]) -> bool:
        n=len(matrix)
        freq= set(range(1,n+1))

        for row in matrix:
            if set(row)!=freq:
                return False

        for col in range(n):
            col_set= {matrix[row][col] for row in range(n)}
            if col_set!=freq:
                return False

        return True