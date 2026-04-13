# 74. Search a 2D Matrix
# https://leetcode.com/problems/search-a-2d-matrix/description/

# Method-1 using binary search (TC-O(mn))
class Solution:
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        m,i,j= len(matrix), 0, len(matrix[0])-1

        while i<m and j>=0:
            if matrix[i][j]==target:
                return True
            elif matrix[i][j]<target:
                i+=1
            else:
                j-=1

        return False
            