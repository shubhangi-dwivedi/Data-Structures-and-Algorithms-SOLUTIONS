# 3512. Minimum Operations to Make Array Sum Divisible by K
# https://leetcode.com/problems/minimum-operations-to-make-array-sum-divisible-by-k/description/

# Method-1 Brute Force
class Solution:
    def minOperations(self, nums: List[int], k: int) -> int:
        sum=0        
        for i in range(len(nums)):
            sum+=nums[i]

        return sum%k

        