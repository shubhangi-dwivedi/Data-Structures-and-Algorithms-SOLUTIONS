#1315. Sum of Nodes with Even-Valued Grandparent
#https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.sum = 0

    def sumEvenGrandparent(self, root: Optional[TreeNode]) -> int:
        self.helper(root)
        return self.sum

    def helper(self, root: TreeNode):
        if root is None:
            return
        
        if root.val % 2 == 0:
            if root.left:
                if root.left.left:
                    self.sum += root.left.left.val
                if root.left.right:
                    self.sum += root.left.right.val
            
            if root.right:
                if root.right.left:
                    self.sum += root.right.left.val
                if root.right.right:
                    self.sum += root.right.right.val
        
        self.helper(root.left)
        self.helper(root.right)