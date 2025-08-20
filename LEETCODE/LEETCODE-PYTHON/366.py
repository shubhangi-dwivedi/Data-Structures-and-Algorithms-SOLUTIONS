# 366. Find Leaves of Binary Tree
# https://leetcode.com/problems/find-leaves-of-binary-tree/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Method-1 usingDFS
class Solution:
    def findLeaves(self, root: Optional[TreeNode]) -> List[List[int]]:
        res=[]
        while root:
            res.append([])
            root=self.dfs(root,res,res[-1])

        return res

    def dfs(self, root, res, temp):
        if not root:
            return None

        if not (root.left or  root.right):
            res[-1].append(root.val)
            return None

        root.left=self.dfs(root.left,res,temp)
        root.right=self.dfs(root.right,res,temp)

        return root