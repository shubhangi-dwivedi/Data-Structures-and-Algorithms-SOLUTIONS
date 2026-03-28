# 210. Course Schedule II
# https://leetcode.com/problems/course-schedule-ii/description/

# Method -1 using dfs (TC-O(v+e))
class Solution:
    def findOrder(self, numCourses: int, prerequisites: List[List[int]]) -> List[int]:
        adj = defaultdict(list)

        for a, b in prerequisites:
            adj[b].append(a)

        visiting=set()
        visited=set()

        res=[]

        def dfs(course):
            if course in visiting:
                return False

            if course in visited:
                return True

            visiting.add(course)

            for neighbor in adj[course]:
                if not dfs(neighbor):
                    return False
            
            visiting.remove(course)
            visited.add(course)

            res.append(course)

            return True

        for course in range(numCourses):
            if not dfs(course):
                return []

        return res[::-1]