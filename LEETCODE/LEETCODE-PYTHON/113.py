# 113. Path Sum II
# https://leetcode.com/problems/path-sum-ii/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

#Method-1 using DFS
class Solution:
    def pathSum(self, root: Optional[TreeNode], targetSum: int) -> List[List[int]]:
        res=[]
        self.dfs(root, targetSum, res, [])

        return res

    def dfs(self, root, targetSum, res, temp):
        if not root:
            return

        temp.append(root.val)

        if not root.left and not root.right and targetSum==sum(temp):
            res.append(temp[:])

        self.dfs(root.left, targetSum, res, temp)
        self.dfs(root.right, targetSum, res, temp)
        temp.pop()