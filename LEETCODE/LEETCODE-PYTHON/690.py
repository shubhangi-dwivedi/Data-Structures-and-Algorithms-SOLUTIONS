# 690. Employee Importance
# https://leetcode.com/problems/employee-importance/description/

"""
# Definition for Employee.
class Employee:
    def __init__(self, id: int, importance: int, subordinates: List[int]):
        self.id = id
        self.importance = importance
        self.subordinates = subordinates
"""

# Method-1 brute force
class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        total_importance=0
        
        def helper(emp):
            nonlocal total_importance
            for i in emp.subordinates:
                for e in employees:
                    if e.id==i:
                        total_importance+= e.importance
                        
                        helper(e)
            
        for e in employees:
            if e.id==id:
                total_importance+=e.importance
                helper(e)

        return total_importance

#Method-2 dfs
class Solution:
    def getImportance(self, employees: List['Employee'], id: int) -> int:
        total_importance=0

        emp_map= defaultdict()
        
        for e in employees:
            emp_map[e.id] = e

        def helper(id,emp_map):
            nonlocal total_importance
            total_importance+=emp_map[id].importance

            for x in emp_map[id].subordinates:
                helper(x,emp_map)

        helper(id,emp_map)

        return total_importance