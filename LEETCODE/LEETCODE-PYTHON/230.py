# 230. Kth Smallest Element in a BST
# https://leetcode.com/problems/kth-smallest-element-in-a-bst/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Method-1 using recursive inorder (TC-O(n))
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        def inorder(root):
            return inorder(root.left) + [root.val] + inorder(root.right) if root else []

        return inorder(root)[k-1]

# Method-2 using iterative inorder (TC-O(h+k))
class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        stack=[]

        while True:
            while root:
                stack.append(root)
                root=root.left
            
            root=stack.pop()
            k-=1

            if not k:
                return root.val
            root=root.right