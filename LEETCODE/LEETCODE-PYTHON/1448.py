# 1448. Count Good Nodes in Binary Tree
# https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Method-1 dfs recursion (TC-O(n))
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        count=0

        def helper(node,curr_max):
            nonlocal count

            if curr_max<=node.val:
                count+=1

            if node.left:
                helper(node.left, max(curr_max,node.val))

            if node.right:
                helper(node.right, max(curr_max,node.val))

        helper(root,float("-inf"))
        return count

# Method-2 dfs iterative (TC-O(n))
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        count=0
        stack=[(root,float("-inf"))]

        while stack:
            node, curr_max= stack.pop()

            if curr_max<=node.val:
                count+=1

            if node.left:
                stack.append((node.left, max(curr_max,node.val)))

            if node.right:
                stack.append((node.right, max(curr_max,node.val)))

        return count

# Method-3 bfs (TC-O(n))
class Solution:
    def goodNodes(self, root: TreeNode) -> int:
        count=0
        q= deque([(root,float("-inf"))])

        while q:
            node, curr_max= q.popleft()

            if curr_max<=node.val:
                count+=1

            if node.left:
                q.append((node.left, max(curr_max,node.val)))

            if node.right:
                q.append((node.right, max(curr_max,node.val)))

        return count
