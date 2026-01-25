# 1. Two Sum
# https://leetcode.com/problems/two-sum/description/

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n=len(nums)
        for i in range(n-1):
            for j in range(i+1,n):
                if nums[i]+nums[j]==target:
                    return [i,j]
        return []
    

class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numsMap={}
        n=len(nums)

        for i in range(n):
            numsMap[nums[i]]=i

        for i in range(n):
            x=target-nums[i]

            if x in numsMap and numsMap[x]!=i:
                return [i,numsMap[x]]

        return []
    
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numsMap={}
        n=len(nums)

        for i in range(n):
            x=target-nums[i]
            if x in numsMap:
                return [i,numsMap[x]]
            numsMap[nums[i]]=i
            
        return []