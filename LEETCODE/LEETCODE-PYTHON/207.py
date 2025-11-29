# 207. Course Schedule
# https://leetcode.com/problems/course-schedule/description 

# Methid-1 using dfs (cycle detection)
class Solution:
    def canFinish(self, numCourses: int, prerequisites: List[List[int]]) -> bool:
        adj = defaultdict(list)

        for a,b in prerequisites:
            adj[b].append(a)

        taken = set()

        def dfs(course):
            if not adj[course]:
                return True
            
            if course in taken:
                return False

            taken.add(course)

            for x in adj[course]:
                if not dfs(x):
                    return False

            adj[course] = []
            
            return True

        for course in range(numCourses):
            if not dfs(course):
                return False
        
        return True