# 323. Number of Connected Components in an Undirected Graph
# https://leetcode.com/problems/number-of-connected-components-in-an-undirected-graph/

# Method-1 dfs and adjcency list
class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        graph= collections.defaultdict(list)
        vis=set()

        for x,y in edges:
            graph[x].append(y)
            graph[y].append(x)

        def dfs(node):
            vis.add(node)

            for neighbour in graph[node]:
                if neighbour not in vis:
                    dfs(neighbour)

        count=0
        for node in range(n):
            if node not in vis:
                count+=1
                dfs(node)

        return count