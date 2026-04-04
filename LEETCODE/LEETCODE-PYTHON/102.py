# 102. Binary Tree Level Order Traversal
# https://leetcode.com/problems/binary-tree-level-order-traversal/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        if root is None:
            return []

        res=[]
        q=deque([root])

        while q:
            level=[]
            size=len(q)

            for _ in range(size): 
                x=q.popleft()
                level.append(x.val)

                if x.left:
                    q.append(x.left)
                if x.right:
                    q.append(x.right)
            
            res.append(level)
        
        return res
        
