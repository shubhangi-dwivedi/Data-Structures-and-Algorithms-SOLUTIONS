# 572. Subtree of Another Tree
# https://leetcode.com/problems/subtree-of-another-tree/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Method-1 (TC-O(m*n))
class Solution:
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        def dfs(node):
            if node is None:
                return False
            elif is_identical(node, subRoot):
                return True

            return dfs(node.left) or dfs(node.right)

        def is_identical(s,t):
            if s is None or t is None:
                return s is None and t is None

            return( s.val==t.val and is_identical(s.left, t.left) and is_identical(s.right, t.right))
                    
        return dfs(root)
                

            