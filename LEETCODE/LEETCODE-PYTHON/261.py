# 261. Graph Valid Tree
# https://leetcode.com/problems/graph-valid-tree/description/

# Method-1 dfs (TC-O(v+e))
class Solution:
    def validTree(self, n: int, edges: List[List[int]]) -> bool:
        if len(edges)!=n-1:
            return False

        adj=[[] for _ in range(n)]
        for a,b in edges:
            adj[a].append(b)
            adj[b].append(a)

        seen=set()

        def dfs(node,parent):
            if node in seen:
                return False

            seen.add(node)

            for neighbor in adj[node]:
                if neighbor==parent:
                    continue

                if neighbor in seen:
                    return False
                
                res=dfs(neighbor,node)

                if not res:
                    return False

            return True

        return dfs(0,-1) and len(seen)==n