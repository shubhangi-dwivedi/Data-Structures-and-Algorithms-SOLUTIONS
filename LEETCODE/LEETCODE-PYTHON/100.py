# 100. Same Tree
# https://leetcode.com/problems/same-tree/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        def helper(p,q):
            if p is None and q is None:
                return True

            if (p is None and q is not None) or (q is None and p is not None):
                return False

            if p.val!=q.val:
                return False

            helper(p.left,q.left)
            helper(p.right,q.right)

            return helper(p.left,q.left) and helper(p.right,q.right)

        
        return helper(p,q)