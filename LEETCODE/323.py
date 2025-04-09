# 323. Number of Connected Components in an Undirected Graph
# https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/

# Method-1 dfs
class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        graph=collections.defaultdict(list)

        for x,y in edges:
            graph[x].append(y)
            graph[y].append(x)


        def helper(node, vis):
            vis.add(node)

            for neighbour in graph[node]:
                if neighbour not in vis:
                    helper(neighbour, vis)

        count=0

        vis=set()

        for node in range(n):
            if node not in vis:
                helper(node, vis)
                count+=1
        
        return count