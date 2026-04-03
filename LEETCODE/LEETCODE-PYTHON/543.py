# 543. Diameter of Binary Tree
# https://leetcode.com/problems/diameter-of-binary-tree/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        diameter=0
        def helper(root):
            nonlocal diameter
            if root is None:
                return 0

            l= helper(root.left)
            r=  helper(root.right)
            diameter=max(diameter, l+r)

            return  max(l,r)+1

        helper(root)
        return diameter

