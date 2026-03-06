# 217. Contains Duplicate
# https://leetcode.com/problems/contains-duplicate/description/

# Method-1 using set
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        unique_set=set()

        for i in nums:
            if i in unique_set:
                return True    
            unique_set.add(i)
                
        return False
        