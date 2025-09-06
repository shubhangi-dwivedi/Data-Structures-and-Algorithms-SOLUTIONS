# 498. Diagonal Traverse
# https://leetcode.com/problems/diagonal-traverse/

#Method - 1
class Solution:
    def findDiagonalOrder(self, mat: List[List[int]]) -> List[int]:
        temp_map= []

        for i in range(len(mat)):
            for j in range(len(mat[0])):
                if i+j>=len(temp_map):
                    temp_map.append([])
                temp_map[i+j].append(mat[i][j])

        res=[]

        for i in range(len(temp_map)):
            if i%2==0:
                res.extend(reversed(temp_map[i]))
            else:
                res.extend(temp_map[i])

        return res