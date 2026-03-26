# 133. Clone Graph
# https://leetcode.com/problems/clone-graph/

"""
# Definition for a Node.
class Node:
    def __init__(self, val = 0, neighbors = None):
        self.val = val
        self.neighbors = neighbors if neighbors is not None else []
"""

# Method-1 DFS (TC-O(v+e), SC-O(v))
from typing import Optional
class Solution:
    # Dictionary to save the visited node and it's respective clone
    # as key and value respectively. This helps to avoid cycles.
    def __init__(self):
        self.visited={}

    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return node

        # If the node was already visited before.
        # Return the clone from the visited dictionary.
        if node in self.visited:
            return self.visited[node]

        # Create a clone for the given node.
        # Note that we don't have cloned neighbors as of now, hence [].
        clone_node= Node(node.val, [])

        # The key is original node and value being the clone node.
        self.visited[node]=clone_node

        # Iterate through the neighbors to generate their clones
        # and prepare a list of cloned neighbors to be added to the cloned node.
        if node.neighbors:
            clone_node.neighbors=[self.cloneGraph(n) for n in node.neighbors]

        return clone_node

# Method-2 using BFS  (TC-O(v+e), SC-O(v))
from typing import Optional
class Solution:
    def cloneGraph(self, node: Optional['Node']) -> Optional['Node']:
        if not node:
            return node

        visited={}

        queue=deque([node])
        visited[node]=Node(node.val,[])

        while queue:
            n=queue.popleft()

            for neighbor in n.neighbors:
                if neighbor not in visited:
                    visited[neighbor]=Node(neighbor.val,[])
                    queue.append(neighbor)
            
                visited[n].neighbors.append(visited[neighbor])

        return visited[node]