# 110. Balanced Binary Tree
# https://leetcode.com/problems/balanced-binary-tree/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        if root is None:
            return True

        def helper(root):
            if root is None:
                return -1

            return max(helper(root.left),helper(root.right))+1

        return (
            abs(helper(root.left) - helper(root.right)) <2
            and self.isBalanced(root.left)
            and self.isBalanced(root.right)
        )