# 199. Binary Tree Right Side View
# https://leetcode.com/problems/binary-tree-right-side-view/

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

# Method-1 using level order bfs, 2 queues (TC-O(N)))
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []

        next_level=deque([root])
        ans=[]

        while next_level:
            curr_level=next_level
            next_level=deque()

            while curr_level:
                node=curr_level.popleft()

                if node.left:
                    next_level.append(node.left)
                if node.right:
                    next_level.append(node.right)

            ans.append(node.val)

        return ans
    
# Method-2 using level order bfs, 1 queue + sentinel (TC-O(N)))
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []

        q=deque([root,None])
        ans=[]

        curr=root
        while q:
            prev, curr= curr, q.popleft()

            while curr:
                if curr.left:
                    q.append(curr.left)
                if curr.right:
                    q.append(curr.right)

                prev, curr= curr, q.popleft()

            ans.append(prev.val)

            if q:
                q.append(None)

        return ans
    
# Method-3 dfs, visiting from right to left and storing first element each time (TC-O(N)))
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []

        ans=[]

        def helper(node, level):
            if level==len(ans):
                ans.append(node.val)

            for child in [node.right, node.left]:
                if child:
                    helper(child, level+1)
        
        helper(root,0)

        return ans